//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class ICSDateValue, ICSDuration;

@interface ICSPeriod : NSObject <NSSecureCoding>
{
    ICSDateValue *_start;
    ICSDateValue *_end;
    ICSDuration *_duration;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isDurationBased;
- (id)duration;
- (id)end;
- (id)start;
- (id)initWithStart:(id)arg1 duration:(id)arg2;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (id)initWithStart:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

