//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class TSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface TSUCustomFormatCondition : NSObject <NSCopying>
{
    int _conditionType;
    double _conditionValue;
    TSUCustomFormatData *_data;
}

@property(readonly, nonatomic) TSUCustomFormatData *data; // @synthesize data=_data;
@property(readonly, nonatomic) double conditionValue; // @synthesize conditionValue=_conditionValue;
@property(readonly, nonatomic) int conditionType; // @synthesize conditionType=_conditionType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (id)init;

@end

