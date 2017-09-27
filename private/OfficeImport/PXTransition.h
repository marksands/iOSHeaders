//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PXTransition : NSObject
{
}

+ (void)writeTransitionFromSlideBase:(id)arg1 file:(id)arg2 state:(id)arg3;
+ (void)writeTransitionOptions:(id)arg1 transitionType:(int)arg2 file:(id)arg3;
+ (_Bool)isPowerPoint2013TransitionType:(int)arg1;
+ (_Bool)isPowerPoint2010TransitionType:(int)arg1;
+ (void)readTransitionFromNode:(struct _xmlNode *)arg1 tgtTransition:(id)arg2 drawingState:(id)arg3;
+ (void)initialize;
+ (void)writeTransitionAttributes:(id)arg1 attributePrefix:(id)arg2 file:(id)arg3;
+ (_Bool)mapDirection:(id)arg1 outDir:(int *)arg2;
+ (void)writeReverseInOut:(int)arg1 file:(id)arg2;
+ (void)writeInOut:(int)arg1 file:(id)arg2;
+ (void)writeReverseOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3;
+ (void)writeOrientation:(int)arg1 withAttributeName:(id)arg2 file:(id)arg3;
+ (void)writeReverseDirection:(int)arg1 file:(id)arg2;
+ (void)writeDirection:(int)arg1 file:(id)arg2;
+ (int)readInOut:(struct _xmlNode *)arg1 defaultValue:(int)arg2;
+ (int)readOrientation:(struct _xmlNode *)arg1 attribute:(const char *)arg2 defaultValue:(int)arg3;
+ (int)readReverseDirection:(struct _xmlNode *)arg1 defaultValue:(int)arg2;
+ (int)readDirection:(struct _xmlNode *)arg1 defaultValue:(int)arg2;

@end

