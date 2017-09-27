//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNBuildAttributes, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface KNAnimatedBuild : NSObject
{
    _Bool _automatic;
    _Bool _animateAtEndOfPreviousBuild;
    _Bool _isMovieStartBuild;
    _Bool _isVisibleAtBeginning;
    _Bool _isVisibleAtEnd;
    long long _buildType;
    NSString *_effectIdentifier;
    long long _eventIndex;
    long long _stageIndex;
    unsigned long long _direction;
    unsigned long long _deliveryOption;
    unsigned long long _deliveryStyle;
    Class _pluginClass;
    KNBuildAttributes *_attributes;
    double _startTime;
    double _eventStartTime;
    double _duration;
    double _endTime;
    double _eventEndTime;
    NSDictionary *_previousAttributes;
    NSDictionary *_finalAttributes;
}

@property(copy, nonatomic) NSDictionary *finalAttributes; // @synthesize finalAttributes=_finalAttributes;
@property(copy, nonatomic) NSDictionary *previousAttributes; // @synthesize previousAttributes=_previousAttributes;
@property(nonatomic) _Bool isVisibleAtEnd; // @synthesize isVisibleAtEnd=_isVisibleAtEnd;
@property(nonatomic) _Bool isVisibleAtBeginning; // @synthesize isVisibleAtBeginning=_isVisibleAtBeginning;
@property(nonatomic) _Bool isMovieStartBuild; // @synthesize isMovieStartBuild=_isMovieStartBuild;
@property(nonatomic) _Bool animateAtEndOfPreviousBuild; // @synthesize animateAtEndOfPreviousBuild=_animateAtEndOfPreviousBuild;
@property(readonly, nonatomic) _Bool automatic; // @synthesize automatic=_automatic;
@property(readonly, nonatomic) double eventEndTime; // @synthesize eventEndTime=_eventEndTime;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double eventStartTime; // @synthesize eventStartTime=_eventStartTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) KNBuildAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) Class pluginClass; // @synthesize pluginClass=_pluginClass;
@property(readonly, nonatomic) unsigned long long deliveryStyle; // @synthesize deliveryStyle=_deliveryStyle;
@property(readonly, nonatomic) unsigned long long deliveryOption; // @synthesize deliveryOption=_deliveryOption;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
@property(nonatomic) long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property(readonly, nonatomic) NSString *effectIdentifier; // @synthesize effectIdentifier=_effectIdentifier;
@property(readonly, nonatomic) long long buildType; // @synthesize buildType=_buildType;
@property(readonly, nonatomic) _Bool isMagicChartBuild;
@property(readonly, nonatomic) _Bool isDriftBuild;
@property(readonly, nonatomic) _Bool isEmphasisBuild;
@property(readonly, nonatomic) _Bool isActionBuild;
@property(readonly, nonatomic) _Bool isBuildOut;
@property(readonly, nonatomic) _Bool isBuildIn;
- (id)description;
- (void)dealloc;
- (id)initWithBuildType:(long long)arg1 effectIdentifier:(id)arg2 attributes:(id)arg3 pluginClass:(Class)arg4 deliveryStyle:(unsigned long long)arg5 eventIndex:(long long)arg6 stageIndex:(long long)arg7 startTime:(double)arg8 eventStartTime:(double)arg9 duration:(double)arg10 direction:(unsigned long long)arg11 automatic:(_Bool)arg12 animateAtEndOfPreviousBuild:(_Bool)arg13;

@end

