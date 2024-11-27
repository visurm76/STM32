#include "tensorflow/lite/c/common.h"
#include "tensorflow/lite/interpreter.h"
#include "tensorflow/lite/model.h"

// Загрузите модель из памяти
const tflite::Model* model = tflite::GetModel(your_tflite_model_data);
tflite::InterpreterBuilder builder(model, resolver);
std::unique_ptr<tflite::Interpreter> interpreter;
builder(&interpreter);

// Подготовьте входные данные
float* input = interpreter->typed_input_tensor<float>(0);
// Заполните input данными

// Выполните инференс
interpreter->Invoke();

// Получите выходные данные
float* output = interpreter->typed_output_tensor<float>(0);