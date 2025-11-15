import ida_typeinf
import idaapi

def iterate_local_types():
    # Get the main type library (TIL) of the IDB
    main_til = idaapi.cvar.idati

    # Start with the first named type in the TIL
    # Only one parameter: the til_t object
    type_name = ida_typeinf.first_named_type(main_til, 1)

    while type_name:
        print(f"Found local type: {type_name}")

        # Optional: Retrieve the type information object (tinfo_t) for detailed analysis
        tif = ida_typeinf.tinfo_t()
        # Only two parameters: the til_t object and the type name
        if tif.get_named_type(main_til, type_name): 
            if tif.is_struct():
                print(f"  Type '{type_name}' is a structure.")
            elif tif.is_union():
                print(f"  Type '{type_name}' is a union.")
            elif tif.is_enum():
                print(f"  Type '{type_name}' is an enumeration.")
            else:
                print(f"  Type '{type_name}' is another type (e.g., typedef, basic type).")
        else:
            print(f"  Could not retrieve tinfo_t for '{type_name}'")

        # Move to the next named type
        type_name = ida_typeinf.next_named_type(main_til, type_name, 1)

    print("Finished iterating through all local types.")

if __name__ == "__main__":
    idaapi.auto_wait()
    iterate_local_types()
