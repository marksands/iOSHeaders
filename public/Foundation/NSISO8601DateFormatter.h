//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import "NSSecureCoding.h"

@class NSTimeZone;

@interface NSISO8601DateFormatter : NSFormatter <NSSecureCoding>
{
    struct __CFDateFormatter *_formatter;
    NSTimeZone *_timeZone;
    unsigned long long _formatOptions;
}

+ (_Bool)supportsSecureCoding;
+ (id)stringFromDate:(id)arg1 timeZone:(id)arg2 formatOptions:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)dateFromString:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)updateFormatter;
@property unsigned long long formatOptions;
@property(copy) NSTimeZone *timeZone;
- (id)init;
- (void)dealloc;

@end

