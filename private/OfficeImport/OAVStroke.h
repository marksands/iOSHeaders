//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAVStroke : NSObject
{
}

+ (id)readFromManager:(id)arg1;
+ (void)initialize;
+ (void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (id)targetFgColorWithManager:(id)arg1;
+ (void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (void)readLineEnd:(id)arg1 type:(id)arg2 width:(id)arg3 length:(id)arg4;
+ (unsigned char)readCapStyle:(id)arg1;
+ (unsigned char)readLineEndLength:(id)arg1;
+ (unsigned char)readLineEndWidth:(id)arg1;
+ (unsigned char)readLineEndType:(id)arg1;
+ (BOOL)readPresetDashStyle:(id)arg1;
+ (unsigned char)readCompoundType:(id)arg1;

@end
