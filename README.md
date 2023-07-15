#### Course: C++. Working with Unreal Engine for C++  
#### Lesson 07. Deferred Actor Creation.  

***  
#### Задачи.  

1. Реализуйте в фабрике переход на новый уровень с помощью метода UGameplayStatics::OpenLevel(GetWorld(), LoadLevelName), где LoadLevelName - имя нового уровня;  

2. Сделайте так, чтобы на новый уровень нельзя было переходить, пока работает фабрика;  

3. Исправьте фабрику так, чтобы при её уничтожении не удалялся актор, а изменялся отображаемый меш.  

   > Примечание.  
   > Изменены классы ATankFactory и AMapLoader.  


