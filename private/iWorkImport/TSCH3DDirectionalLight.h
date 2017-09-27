//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DLight.h>

#import "TSCH3DLightDirectional.h"

@class TSCH3DVector;

__attribute__((visibility("hidden")))
@interface TSCH3DDirectionalLight : TSCH3DLight <TSCH3DLightDirectional>
{
    TSCH3DVector *_direction;
}

+ (Class)effectClass;
+ (id)instanceWithArchive:(const struct Chart3DLightArchive *)arg1 unarchiver:(id)arg2;
@property(nonatomic) tvec3_17f03ce0 direction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct Chart3DLightArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DLightArchive *)arg1 unarchiver:(id)arg2;

@end

