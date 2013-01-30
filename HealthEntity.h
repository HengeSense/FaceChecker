//
//  HealthEntity.h
//  Face
//
//  Created by takao maeda on 2012/12/09.
//  Copyright (c) 2012年 前田 恭男. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface HealthEntity : NSObject

//FMDBではプリミティブな型を使用できない為にここでラッパークラスに変更しておく

@property NSNumber *healthStatus;
@property NSNumber *red;
@property NSNumber *blue;
@property NSNumber *green;
@property NSString *recordDate;

@end
