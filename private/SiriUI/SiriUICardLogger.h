//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter;

@interface SiriUICardLogger : NSObject
{
    NSDateFormatter *_dateFormatter;
}

+ (id)logCard:(id)arg1 format:(unsigned long long)arg2;
+ (id)logCard:(id)arg1;
+ (id)logCardData:(id)arg1 format:(unsigned long long)arg2;
+ (id)logCardData:(id)arg1;
+ (id)_sharedInstance;
- (void).cxx_destruct;
- (id)_nowString;
- (id)_dateFormatter;
- (id)_currentFilenameForFormat:(unsigned long long)arg1;
- (id)init;

@end

