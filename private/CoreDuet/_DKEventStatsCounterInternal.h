//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface _DKEventStatsCounterInternal : NSObject
{
    _Bool _hasType;
    _Bool _hasResult;
    struct XSPerfCollection *_stats;
    // Error parsing type: ^{XSPerfCounter=AQ}, name: _counters
    NSString *_eventName;
    NSString *_eventType;
    NSArray *_typeValues;
    NSString *_domain;
}

@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSArray *typeValues; // @synthesize typeValues=_typeValues;
@property(readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (unsigned long long)countWithTypeValue:(id)arg1 success:(_Bool)arg2;
- (void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(_Bool)arg3;
- (unsigned long long)indexOfTypeValue:(id)arg1 success:(_Bool)arg2;
- (void)dealloc;
- (id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(_Bool)arg5 scalar:(_Bool)arg6;
- (id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(_Bool)arg5;

@end

