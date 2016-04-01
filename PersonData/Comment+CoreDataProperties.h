//
//  Comment+CoreDataProperties.h
//  PersonData
//
//  Created by 李怀泰 on 16/3/21.
//  Copyright © 2016年 李怀泰. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Comment.h"

NS_ASSUME_NONNULL_BEGIN

@interface Comment (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *text;
@property (nullable, nonatomic, retain) NSString *date;
@property (nullable, nonatomic, retain) Person *person;

@end

NS_ASSUME_NONNULL_END
