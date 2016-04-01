//
//  Person+CoreDataProperties.h
//  PersonData
//
//  Created by 李怀泰 on 16/3/21.
//  Copyright © 2016年 李怀泰. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Person (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *sex;
@property (nullable, nonatomic, retain) NSString *age;
@property (nullable, nonatomic, retain) NSSet<Comment *> *comment;

@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addCommentObject:(Comment *)value;
- (void)removeCommentObject:(Comment *)value;
- (void)addComment:(NSSet<Comment *> *)values;
- (void)removeComment:(NSSet<Comment *> *)values;

@end

NS_ASSUME_NONNULL_END
