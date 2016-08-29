#include <precompiled.h>
#include <compiler/compiler_Nova_Compiler.h>



compiler_Extension_VTable_Compiler compiler_Extension_VTable_Compiler_val =
{
		{
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				(char(*)(nova_operators_Nova_Equals*, nova_exception_Nova_ExceptionData*, nova_Nova_Object*))nova_Nova_Object_0_Nova_equals,
				0,
				0,
				0,
				0,
				0,
		},
		nova_Nova_Object_0_Nova_toString,
		nova_Nova_Object_0_Nova_equals,
		nova_Nova_Object_Accessor_Nova_hashCodeLong,
};



void compiler_Nova_Compiler_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData);
char compiler_Nova_Compiler_Nova_DEBUG;
void compiler_Nova_Compiler_Nova_init_static(nova_exception_Nova_ExceptionData* exceptionData)
{
		{
		}
}

compiler_Nova_Compiler* compiler_Nova_Compiler_Nova_construct(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
		CCLASS_NEW(compiler_Nova_Compiler, this,);
		this->vtable = &compiler_Extension_VTable_Compiler_val;
		nova_Nova_Object_Nova_super((nova_Nova_Object*)this, exceptionData);
		compiler_Nova_Compiler_Nova_super(this, exceptionData);
		
		{
				compiler_Nova_Compiler_0_Nova_this(this, exceptionData);
		}
		
		return this;
}

void compiler_Nova_Compiler_Nova_destroy(compiler_Nova_Compiler** this, nova_exception_Nova_ExceptionData* exceptionData)
{
		if (!*this)
		{
				return;
		}
		
		
		NOVA_FREE(*this);
}

void compiler_Nova_Compiler_Nova_main(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* compiler_Nova_Compiler_Nova_args)
{
		nova_io_Nova_Console_1_Nova_writeLine(0, exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("In compiler")));
		nova_io_Nova_Console_Nova_waitForEnter(0, exceptionData);
}

void compiler_Nova_Compiler_0_Nova_this(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void compiler_Nova_Compiler_Nova_compile(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData, nova_datastruct_list_Nova_Array* compiler_Nova_Compiler_Nova_args)
{
		nova_Nova_String* l1_Nova_directory = (nova_Nova_String*)nova_null;
		
		l1_Nova_directory = (nova_Nova_String*)(nova_Nova_String_virtual1_Nova_concat((nova_Nova_String*)(compiler_util_Nova_FileUtils_Nova_getWorkingDirectoryPath(0, exceptionData)), exceptionData, nova_Nova_String_1_Nova_construct(0, exceptionData, (char*)("/"))));
		if (compiler_Nova_Compiler_Nova_DEBUG)
		{
				compiler_Nova_Compiler_Nova_testClasses(this, exceptionData);
		}
}

void compiler_Nova_Compiler_Nova_testClasses(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}

void compiler_Nova_Compiler_Nova_super(compiler_Nova_Compiler* this, nova_exception_Nova_ExceptionData* exceptionData)
{
}



nova_primitive_Nova_Null* nova_null;
void* nova_garbageData;

int main(int argc, char** argvs)
{
		nova_Nova_String** args;
		int      i;
		
		nova_exception_Nova_ExceptionData* exceptionData = 0;
		srand(currentTimeMillis());
		nova_garbageData = malloc(sizeof(void*));
		nova_gc_Nova_GC_Nova_init(0, exceptionData);
		
		nova_null = nova_primitive_Nova_Null_Nova_construct(0, exceptionData);
		novaEnv.nova_Object.toString = nova_Extension_VTable_Object_val.nova_Nova_Object_virtual1_Nova_toString;
		novaEnv.nova_Object.equals__nova_Object = nova_Extension_VTable_Object_val.nova_operators_Nova_Equals_virtual0_Nova_equals;
		novaEnv.nova_String.concat__nova_String = nova_Extension_VTable_String_val.nova_Nova_String_virtual1_Nova_concat;
		novaEnv.nova_String.toString = nova_Extension_VTable_String_val.nova_Nova_Object_virtual1_Nova_toString;
		novaEnv.nova_datastruct_Comparable.compareTo__nova_Object = nova_datastruct_Extension_VTable_Comparable_val.itable.nova_datastruct_Nova_Comparable_virtual0_Nova_compareTo;
		novaEnv.nova_datastruct_HashMap.put__nova_Object__nova_Object = nova_datastruct_Extension_VTable_HashMap_val.nova_datastruct_Nova_HashMap_virtual1_Nova_put;
		novaEnv.nova_datastruct_list_Array.get__nova_primitive_number_Int = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_Array_virtual1_Nova_get;
		novaEnv.nova_datastruct_list_Array.map__nova_Object = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_map;
		novaEnv.nova_datastruct_list_Array.forEach__void = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_forEach;
		novaEnv.nova_datastruct_list_Array.any__nova_primitive_Bool = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_any;
		novaEnv.nova_datastruct_list_Array.all__nova_primitive_Bool = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_all;
		novaEnv.nova_datastruct_list_Array.filter__nova_primitive_Bool = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_filter;
		novaEnv.nova_datastruct_list_Array.take__nova_primitive_number_Int = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_take;
		novaEnv.nova_datastruct_list_Array.skip__nova_primitive_number_Int = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_skip;
		novaEnv.nova_datastruct_list_Array.firstWhere__nova_primitive_Bool = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere;
		novaEnv.nova_datastruct_list_Array.reverse = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_reverse;
		novaEnv.nova_datastruct_list_Array.join__nova_String = nova_datastruct_list_Extension_VTable_Array_val.nova_datastruct_list_Nova_List_virtual0_Nova_join;
		novaEnv.nova_datastruct_list_Iterator.reset = nova_datastruct_list_Extension_VTable_Iterator_val.itable.nova_datastruct_list_Nova_Iterator_virtual0_Nova_reset;
		novaEnv.nova_datastruct_list_List.toArray = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_toArray;
		novaEnv.nova_datastruct_list_List.contains__nova_Object = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_contains;
		novaEnv.nova_datastruct_list_List.forEach__void = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_forEach;
		novaEnv.nova_datastruct_list_List.map__nova_Object = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_map;
		novaEnv.nova_datastruct_list_List.any__nova_primitive_Bool = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_any;
		novaEnv.nova_datastruct_list_List.all__nova_primitive_Bool = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_all;
		novaEnv.nova_datastruct_list_List.filter__nova_primitive_Bool = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_filter;
		novaEnv.nova_datastruct_list_List.take__nova_primitive_number_Int = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_take;
		novaEnv.nova_datastruct_list_List.skip__nova_primitive_number_Int = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_skip;
		novaEnv.nova_datastruct_list_List.firstWhere__nova_primitive_Bool = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_firstWhere;
		novaEnv.nova_datastruct_list_List.reverse = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_reverse;
		novaEnv.nova_datastruct_list_List.join__nova_String = nova_datastruct_list_Extension_VTable_List_val.itable.nova_datastruct_list_Nova_List_virtual0_Nova_join;
		novaEnv.nova_io_InputStream.readString = nova_io_Extension_VTable_InputStream_val.itable.nova_io_Nova_InputStream_virtual1_Nova_readString;
		novaEnv.nova_io_InputStream.readBytes = nova_io_Extension_VTable_InputStream_val.itable.nova_io_Nova_InputStream_virtual1_Nova_readBytes;
		novaEnv.nova_io_OutputStream.write__nova_String = nova_io_Extension_VTable_OutputStream_val.nova_io_Nova_OutputStream_virtual0_Nova_write;
		novaEnv.nova_io_OutputStream.write__nova_Object = nova_io_Extension_VTable_OutputStream_val.nova_io_Nova_OutputStream_virtual1_Nova_write;
		novaEnv.nova_math_NumericOperand.toString = nova_math_Extension_VTable_NumericOperand_val.nova_Nova_Object_virtual1_Nova_toString;
		novaEnv.nova_operators_Equals.equals__nova_Object = nova_operators_Extension_VTable_Equals_val.itable.nova_operators_Nova_Equals_virtual0_Nova_equals;
		novaEnv.nova_operators_Multiply.multiply__nova_Object = nova_operators_Extension_VTable_Multiply_val.itable.nova_operators_Nova_Multiply_virtual1_Nova_multiply;
		novaEnv.nova_primitive_number_Number.numDigits__nova_primitive_number_Number = nova_primitive_number_Extension_VTable_Number_val.nova_primitive_number_Nova_Number_virtual0_Nova_numDigits;
		novaEnv.nova_svg_SvgComponent.generateOutput__nova_io_File = nova_svg_Extension_VTable_SvgComponent_val.nova_svg_Nova_SvgComponent_virtual0_Nova_generateOutput;
		novaEnv.nova_svg_no3_No3Node.toJs = nova_svg_no3_Extension_VTable_No3Node_val.nova_svg_no3_Nova_No3Node_virtual1_Nova_toJs;
		novaEnv.nova_thread_Thread.run = nova_thread_Extension_VTable_Thread_val.nova_thread_Nova_Thread_virtual0_Nova_run;
		novaEnv.nova_thread_UncaughtExceptionHandler.uncaughtException__nova_thread_Thread__nova_exception_Exception = nova_thread_Extension_VTable_UncaughtExceptionHandler_val.nova_thread_Nova_UncaughtExceptionHandler_virtual1_Nova_uncaughtException;
		novaEnv.nova_web_svg_SvgComponent.generateOutput__nova_io_File = nova_web_svg_Extension_VTable_SvgComponent_val.nova_web_svg_Nova_SvgComponent_virtual0_Nova_generateOutput;
		novaEnv.nova_web_svg_no3_No3Node.toJs = nova_web_svg_no3_Extension_VTable_No3Node_val.nova_web_svg_no3_Nova_No3Node_virtual1_Nova_toJs;
		novaEnv.compiler_tree_node_Listenable.onAdded__compiler_tree_node_Node = compiler_tree_node_Extension_VTable_Listenable_val.itable.compiler_tree_node_Nova_Listenable_virtual1_Nova_onAdded;
		novaEnv.compiler_tree_node_Node.clone__compiler_tree_node_Node__compiler_util_Location__nova_primitive_Bool = compiler_tree_node_Extension_VTable_Node_val.compiler_tree_node_Nova_Node_virtual1_Nova_clone;
		novaEnv.compiler_tree_node_annotation_Annotatable.addAnnotation__compiler_tree_node_annotation_Annotation = compiler_tree_node_annotation_Extension_VTable_Annotatable_val.itable.compiler_tree_node_annotation_Nova_Annotatable_virtual0_Nova_addAnnotation;
		novaEnv.example_Animal.getNumLegs = example_Extension_VTable_Animal_val.example_Nova_Animal_virtual1_Nova_getNumLegs;
		novaEnv.example_Animal.getNumEyes = example_Extension_VTable_Animal_val.example_Nova_Animal_virtual1_Nova_getNumEyes;
		novaEnv.example_Animal.getDescription = example_Extension_VTable_Animal_val.example_Nova_Animal_virtual1_Nova_getDescription;
		novaEnv.example_Person.sayHello = example_Extension_VTable_Person_val.example_Nova_Person_virtual0_Nova_sayHello;
		novaEnv.example_Polygon.numberSides = example_Extension_VTable_Polygon_val.itable.example_Nova_Polygon_virtual1_Nova_numberSides;
		novaEnv.example_Polygon.calculateArea = example_Extension_VTable_Polygon_val.itable.example_Nova_Polygon_virtual1_Nova_calculateArea;
		novaEnv.stabilitytest_PolymorphicSuperClass.toString = stabilitytest_Extension_VTable_PolymorphicSuperClass_val.nova_Nova_Object_virtual1_Nova_toString;
		novaEnv.stabilitytest_StabilityTestCase.test = stabilitytest_Extension_VTable_StabilityTestCase_val.stabilitytest_Nova_StabilityTestCase_virtual0_Nova_test;
		
		nova_Nova_Class_Nova_init_static(exceptionData);
		nova_Nova_Object_Nova_init_static(exceptionData);
		nova_Nova_String_Nova_init_static(exceptionData);
		nova_Nova_System_Nova_init_static(exceptionData);
		nova_database_Nova_DBConnector_Nova_init_static(exceptionData);
		nova_database_Nova_ResultSet_Nova_init_static(exceptionData);
		nova_datastruct_Nova_BinaryNode_Nova_init_static(exceptionData);
		nova_datastruct_Nova_BinaryTree_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Bounds_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Comparable_Nova_init_static(exceptionData);
		nova_datastruct_Nova_HashMap_Nova_init_static(exceptionData);
		nova_datastruct_Nova_HashSet_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Node_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Pair_Nova_init_static(exceptionData);
		nova_datastruct_Nova_ReversibleHashMap_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Tree_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Vector_Nova_init_static(exceptionData);
		nova_datastruct_Nova_Vector2D_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Array_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CharArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CharArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_CompiledList_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_DoubleArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_DoubleArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_EmptyStackException_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntArray_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntArrayIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntRange_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_IntRangeIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Iterable_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Iterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_LinkedList_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_LinkedListIterator_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_List_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_ListNode_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_NoSuchElementException_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Queue_Nova_init_static(exceptionData);
		nova_datastruct_list_Nova_Stack_Nova_init_static(exceptionData);
		nova_exception_Nova_DivideByZeroException_Nova_init_static(exceptionData);
		nova_exception_Nova_Exception_Nova_init_static(exceptionData);
		nova_exception_Nova_ExceptionData_Nova_init_static(exceptionData);
		nova_exception_Nova_UnimplementedOperationException_Nova_init_static(exceptionData);
		nova_gc_Nova_GC_Nova_init_static(exceptionData);
		nova_io_Nova_Console_Nova_init_static(exceptionData);
		nova_io_Nova_File_Nova_init_static(exceptionData);
		nova_io_Nova_File_Nova_init_static(exceptionData);
		nova_io_Nova_FileNotFoundException_Nova_init_static(exceptionData);
		nova_io_Nova_InputStream_Nova_init_static(exceptionData);
		nova_io_Nova_OutputStream_Nova_init_static(exceptionData);
		nova_io_Nova_StreamReader_Nova_init_static(exceptionData);
		nova_math_Nova_ArithmeticSequence_Nova_init_static(exceptionData);
		nova_math_Nova_Diekstra_Nova_init_static(exceptionData);
		nova_math_Nova_GeometricSequence_Nova_init_static(exceptionData);
		nova_math_Nova_Graph_Nova_init_static(exceptionData);
		nova_math_Nova_InvalidNumericStatementException_Nova_init_static(exceptionData);
		nova_math_Nova_Math_Nova_init_static(exceptionData);
		nova_math_Nova_Matrix_Nova_init_static(exceptionData);
		nova_math_Nova_NumericOperand_Nova_init_static(exceptionData);
		nova_math_Nova_NumericOperation_Nova_init_static(exceptionData);
		nova_math_Nova_NumericStatement_Nova_init_static(exceptionData);
		nova_math_Nova_NumericTree_Nova_init_static(exceptionData);
		nova_math_Nova_Polynomial_Nova_init_static(exceptionData);
		nova_math_Nova_Sequence_Nova_init_static(exceptionData);
		nova_math_Nova_Statement_Nova_init_static(exceptionData);
		nova_math_Nova_StatementComponent_Nova_init_static(exceptionData);
		nova_math_Nova_VariableOperand_Nova_init_static(exceptionData);
		nova_math_calculus_Nova_Calculus_Nova_init_static(exceptionData);
		nova_math_huffman_Nova_HuffmanTree_Nova_init_static(exceptionData);
		nova_math_logic_Nova_Conclusion_Nova_init_static(exceptionData);
		nova_math_logic_Nova_Hypothesis_Nova_init_static(exceptionData);
		nova_math_logic_Nova_InvalidFormulaException_Nova_init_static(exceptionData);
		nova_math_logic_Nova_LogicalConnective_Nova_init_static(exceptionData);
		nova_math_logic_Nova_LogicalStatement_Nova_init_static(exceptionData);
		nova_math_logic_Nova_StatementComponent_Nova_init_static(exceptionData);
		nova_math_logic_Nova_StatementGroup_Nova_init_static(exceptionData);
		nova_math_logic_Nova_StatementLetter_Nova_init_static(exceptionData);
		nova_math_logic_Nova_WFF_Nova_init_static(exceptionData);
		nova_network_Nova_ClientSocket_Nova_init_static(exceptionData);
		nova_network_Nova_ConnectionSocket_Nova_init_static(exceptionData);
		nova_network_Nova_NetworkInputStream_Nova_init_static(exceptionData);
		nova_network_Nova_NetworkOutputStream_Nova_init_static(exceptionData);
		nova_network_Nova_ServerSocket_Nova_init_static(exceptionData);
		nova_network_Nova_Socket_Nova_init_static(exceptionData);
		nova_operators_Nova_Equals_Nova_init_static(exceptionData);
		nova_operators_Nova_Multiply_Nova_init_static(exceptionData);
		nova_primitive_Nova_Bool_Nova_init_static(exceptionData);
		nova_primitive_Nova_Null_Nova_init_static(exceptionData);
		nova_primitive_Nova_Primitive_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Byte_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Char_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Double_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Float_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Int_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Integer_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Long_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Number_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_RealNumber_Nova_init_static(exceptionData);
		nova_primitive_number_Nova_Short_Nova_init_static(exceptionData);
		nova_process_Nova_Process_Nova_init_static(exceptionData);
		nova_security_Nova_MD5_Nova_init_static(exceptionData);
		nova_star_Nova_Window_Nova_init_static(exceptionData);
		nova_star_Nova_WindowThread_Nova_init_static(exceptionData);
		nova_svg_Nova_Svg_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgCircle_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgComponent_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgComponentList_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgComponentNode_Nova_init_static(exceptionData);
		nova_svg_Nova_SvgMainComponent_Nova_init_static(exceptionData);
		nova_svg_no3_Nova_No3_Nova_init_static(exceptionData);
		nova_svg_no3_Nova_No3Node_Nova_init_static(exceptionData);
		nova_svg_no3_Nova_No3Selection_Nova_init_static(exceptionData);
		nova_thread_Nova_Thread_Nova_init_static(exceptionData);
		nova_thread_Nova_UncaughtExceptionHandler_Nova_init_static(exceptionData);
		nova_thread_async_Nova_Async_Nova_init_static(exceptionData);
		nova_thread_async_Nova_AsyncResult_Nova_init_static(exceptionData);
		nova_time_Nova_Date_Nova_init_static(exceptionData);
		nova_time_Nova_Time_Nova_init_static(exceptionData);
		nova_time_Nova_Timer_Nova_init_static(exceptionData);
		nova_web_js_json_Nova_Json_Nova_init_static(exceptionData);
		nova_web_svg_Nova_Svg_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgCircle_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgComponent_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgComponentList_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgComponentNode_Nova_init_static(exceptionData);
		nova_web_svg_Nova_SvgMainComponent_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3Node_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3Select_Nova_init_static(exceptionData);
		nova_web_svg_no3_Nova_No3SelectAll_Nova_init_static(exceptionData);
		compiler_Nova_Compiler_Nova_init_static(exceptionData);
		compiler_error_Nova_UnimplementedOperationException_Nova_init_static(exceptionData);
		compiler_tree_Nova_SyntaxTree_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Listenable_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Listener_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Node_Nova_init_static(exceptionData);
		compiler_tree_node_Nova_Scope_Nova_init_static(exceptionData);
		compiler_tree_node_annotation_Nova_Annotatable_Nova_init_static(exceptionData);
		compiler_tree_node_annotation_Nova_Annotation_Nova_init_static(exceptionData);
		compiler_tree_node_exceptionhandling_Nova_ExceptionHandler_Nova_init_static(exceptionData);
		compiler_tree_node_exceptionhandling_Nova_Try_Nova_init_static(exceptionData);
		compiler_util_Nova_FileUtils_Nova_init_static(exceptionData);
		compiler_util_Nova_Location_Nova_init_static(exceptionData);
		compiler_util_Nova_OS_Nova_init_static(exceptionData);
		compiler_util_Nova_OS_Nova_init_static(exceptionData);
		compiler_util_Nova_StringUtils_Nova_init_static(exceptionData);
		compiler_util_Nova_SyntaxUtils_Nova_init_static(exceptionData);
		example_Nova_Animal_Nova_init_static(exceptionData);
		example_Nova_ArrayDemo_Nova_init_static(exceptionData);
		example_Nova_BodyBuilder_Nova_init_static(exceptionData);
		example_Nova_ClosureDemo_Nova_init_static(exceptionData);
		example_Nova_Dog_Nova_init_static(exceptionData);
		example_Nova_ExceptionHandlingDemo_Nova_init_static(exceptionData);
		example_Nova_FileTest_Nova_init_static(exceptionData);
		example_Nova_GenericDemo_Nova_init_static(exceptionData);
		example_Nova_HashMapDemo_Nova_init_static(exceptionData);
		example_Nova_HashSetDemo_Nova_init_static(exceptionData);
		example_Nova_IntegerTest_Nova_init_static(exceptionData);
		example_Nova_Lab_Nova_init_static(exceptionData);
		example_Nova_MathDemo_Nova_init_static(exceptionData);
		example_Nova_NonWholeDivisionException_Nova_init_static(exceptionData);
		example_Nova_Person_Nova_init_static(exceptionData);
		example_Nova_Polygon_Nova_init_static(exceptionData);
		example_Nova_PolymorphismDemo_Nova_init_static(exceptionData);
		example_Nova_QueueDemo_Nova_init_static(exceptionData);
		example_Nova_Spider_Nova_init_static(exceptionData);
		example_Nova_Square_Nova_init_static(exceptionData);
		example_Nova_SvgChart_Nova_init_static(exceptionData);
		example_Nova_SvgFractal_Nova_init_static(exceptionData);
		example_Nova_T1_Nova_init_static(exceptionData);
		example_Nova_T2_Nova_init_static(exceptionData);
		example_Nova_Test_Nova_init_static(exceptionData);
		example_Nova_ThreadDemo_Nova_init_static(exceptionData);
		example_Nova_ThreadDemoImplementation_Nova_init_static(exceptionData);
		example_ackermann_Nova_Ackermann_Nova_init_static(exceptionData);
		example_copy_Nova_Dog_Nova_init_static(exceptionData);
		example_database_Nova_DatabaseDemo_Nova_init_static(exceptionData);
		example_network_Nova_ClientDemo_Nova_init_static(exceptionData);
		example_network_Nova_ConnectionThread_Nova_init_static(exceptionData);
		example_network_Nova_OutputThread_Nova_init_static(exceptionData);
		example_network_Nova_ServerDemo_Nova_init_static(exceptionData);
		stabilitytest_Nova_AssignmentStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_ClassWithProperties_Nova_init_static(exceptionData);
		stabilitytest_Nova_ClientThread_Nova_init_static(exceptionData);
		stabilitytest_Nova_ClosureStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_ExceptionStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_FileStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_LambdaStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_NetworkStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_PolymorphicSubClass_Nova_init_static(exceptionData);
		stabilitytest_Nova_PolymorphicSuperClass_Nova_init_static(exceptionData);
		stabilitytest_Nova_PolymorphismStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_StabilityExceptionHandler_Nova_init_static(exceptionData);
		stabilitytest_Nova_StabilityTest_Nova_init_static(exceptionData);
		stabilitytest_Nova_StabilityTestCase_Nova_init_static(exceptionData);
		stabilitytest_Nova_StabilityTestException_Nova_init_static(exceptionData);
		stabilitytest_Nova_SyntaxStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_ThreadImplementation_Nova_init_static(exceptionData);
		stabilitytest_Nova_ThreadStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_TimeStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_ToStringStability_Nova_init_static(exceptionData);
		stabilitytest_Nova_UnstableException_Nova_init_static(exceptionData);
		
		args = (nova_Nova_String**)NOVA_MALLOC(argc * sizeof(nova_Nova_String));
		
		for (i = 0; i < argc; i++)
		{
				char* str = (char*)NOVA_MALLOC(sizeof(char) * strlen(argvs[i]) + 1);
				copy_string(str, argvs[i]);
				args[i] = nova_Nova_String_1_Nova_construct(0, 0, str);
		}
		nova_datastruct_list_Nova_Array* argsArray = nova_datastruct_list_Nova_Array_2_Nova_construct(0, exceptionData, (nova_Nova_Object**)args, argc);
		TRY
		{
				compiler_Nova_Compiler_Nova_main(0, exceptionData, argsArray);
		}
		CATCH (1)
		{
				nova_exception_Nova_Exception* base = (nova_exception_Nova_Exception*)exceptionData->nova_exception_Nova_ExceptionData_Nova_thrownException;
				printf("Exception in Thread 'main': %s", base->nova_exception_Nova_Exception_Nova_message->nova_Nova_String_Nova_chars);
				nova_io_Nova_Console_Nova_waitForEnter(0, exceptionData);
				
		}
		FINALLY
		{
				
		}
		END_TRY;
		FreeConsole();
		NOVA_FREE(args);
		nova_gc_Nova_GC_Nova_collect(0, exceptionData);
		
		
		return 0;
}
