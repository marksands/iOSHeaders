//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioToolbox/AUParameterNode.h>

#import "NSSecureCoding.h"

@class NSArray, NSString, _AUStaticParameterInfo;

@interface AUParameter : AUParameterNode <NSSecureCoding>
{
    _Bool __localValueStale;
    float _value;
    int _numUIObservers;
    int _numRecordingObservers;
    unsigned long long _address;
    NSArray *_dependentParameters;
    _AUStaticParameterInfo *_info;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int numRecordingObservers; // @synthesize numRecordingObservers=_numRecordingObservers;
@property(nonatomic) int numUIObservers; // @synthesize numUIObservers=_numUIObservers;
@property(nonatomic) _Bool _localValueStale; // @synthesize _localValueStale=__localValueStale;
@property(retain, nonatomic) _AUStaticParameterInfo *info; // @synthesize info=_info;
@property(readonly, copy, nonatomic) NSArray *dependentParameters; // @synthesize dependentParameters=_dependentParameters;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
- (void).cxx_destruct;
- (void)_observersChanged:(_Bool)arg1 deltaCount:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)set_clumpID:(unsigned int)arg1;
- (unsigned int)_clumpID;
@property(readonly, copy, nonatomic) NSArray *valueStrings;
@property(readonly, nonatomic) unsigned int flags;
@property(readonly, copy, nonatomic) NSString *unitName;
@property(readonly, nonatomic) unsigned int unit;
@property(readonly, nonatomic) float maxValue;
@property(readonly, nonatomic) float minValue;
- (float)valueFromString:(id)arg1;
- (id)stringFromValue:(const float *)arg1;
- (void)setValue:(float)arg1 extOriginator:(struct AUParameterObserverExtendedToken)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;
- (void)setValue:(float)arg1 originator:(void *)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;
- (void)setValue:(float)arg1 originator:(void *)arg2 atHostTime:(unsigned long long)arg3;
- (void)setValue:(float)arg1 originator:(void *)arg2;
@property(nonatomic) float value; // @synthesize value=_value;
- (float)_internalValue;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;

@end

