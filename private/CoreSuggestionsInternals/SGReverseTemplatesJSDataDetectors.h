//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSSet;

@interface SGReverseTemplatesJSDataDetectors : NSObject
{
    NSMutableDictionary *_scanners;
    NSSet *_availLocales;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_naiveDateFormatter;
    NSDateFormatter *_noTimeFormatter;
}

- (void).cxx_destruct;
- (void)_result:(struct __DDResult *)arg1 containsTypes:(id)arg2 foundTypes:(id)arg3;
- (id)_result:(struct __DDResult *)arg1 containsTypes:(id)arg2;
- (id)runDataDetectors:(id)arg1 locale:(id)arg2 epoch:(double)arg3 metadataForTypes:(id)arg4;
- (void)dealloc;
- (id)init;

@end

