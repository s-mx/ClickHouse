#ifndef DBMS_CORE_ERROR_CODES_H
#define DBMS_CORE_ERROR_CODES_H


namespace DB
{

namespace ErrorCodes
{
	enum ErrorCodes
	{
		UNSUPPORTED_METHOD,
		UNSUPPORTED_PARAMETER,
		UNEXPECTED_END_OF_FILE,
		CANNOT_READ_DATA_FROM_READ_BUFFER,
		CANNOT_PARSE_TEXT,
		INCORRECT_NUMBER_OF_COLUMNS,
		THERE_IS_NO_COLUMN,
		SIZES_OF_COLUMNS_DOESNT_MATCH,
		EMPTY_COLUMN_IN_BLOCK,
		NOT_FOUND_COLUMN_IN_BLOCK,
		POSITION_OUT_OF_BOUND,
		PARAMETER_OUT_OF_BOUND,
		SIZES_OF_COLUMNS_IN_TUPLE_DOESNT_MATCH,
		EMPTY_TUPLE,
		DUPLICATE_COLUMN,
		NO_SUCH_COLUMN_IN_TABLE,
		DELIMITER_IN_STRING_LITERAL_DOESNT_MATCH,
		CANNOT_INSERT_ELEMENT_INTO_CONSTANT_COLUMN,
		SIZE_OF_ARRAY_DOESNT_MATCH_SIZE_OF_FIXEDARRAY_COLUMN,
		NUMBER_OF_COLUMNS_DOESNT_MATCH,
		CANNOT_READ_ALL_DATA_FROM_TAB_SEPARATED_INPUT,
		CANNOT_PARSE_ALL_VALUE_FROM_TAB_SEPARATED_INPUT,
		CANNOT_READ_FROM_ISTREAM,
		CANNOT_WRITE_TO_OSTREAM,
		CANNOT_PARSE_ESCAPE_SEQUENCE,
		CANNOT_PARSE_QUOTED_STRING,
		CANNOT_PARSE_INPUT_ASSERTION_FAILED,
		CANNOT_PRINT_FLOAT_OR_DOUBLE_NUMBER,
		CANNOT_PRINT_INTEGER,
		CANNOT_READ_SIZE_OF_COMPRESSED_CHUNK,
		CANNOT_READ_COMPRESSED_CHUNK,
		ATTEMPT_TO_READ_AFTER_EOF,
		CANNOT_READ_ALL_DATA,
		TOO_MUCH_ARGUMENTS_FOR_FUNCTION,
		TOO_LESS_ARGUMENTS_FOR_FUNCTION,
		UNKNOWN_ELEMENT_IN_AST,
		CANNOT_PARSE_DATE,
		TOO_LARGE_SIZE_COMPRESSED,
		CHECKSUM_DOESNT_MATCH,
		CANNOT_PARSE_DATETIME,
		NUMBER_OF_ARGUMENTS_DOESNT_MATCH,
		ILLEGAL_TYPE_OF_ARGUMENT,
		ILLEGAL_COLUMN,
		ILLEGAL_NUMBER_OF_RESULT_COLUMNS,
	};
}

}

#endif
