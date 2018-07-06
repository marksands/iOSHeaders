//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSSet, NSString;

@interface AWAttentionAwarenessConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_attentionLostTimeouts;
    NSDictionary *_attentionLostTimeoutDictionary;
    _Bool _samplingDelayExplicitlySet;
    unsigned long long _tagIndex;
    NSString *_identifier;
    id <NSCopying> _tag;
    unsigned long long _eventMask;
    double _samplingInterval;
    double _samplingDelay;
}

+ (void)cancelNotification:(struct AWNotification_s *)arg1;
+ (struct AWNotification_s *)notifySupportedEventsChangedWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)supportedEventsString;
+ (unsigned long long)supportedEvents;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(nonatomic) double samplingDelay; // @synthesize samplingDelay=_samplingDelay;
@property(nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(nonatomic) unsigned long long eventMask; // @synthesize eventMask=_eventMask;
@property(copy, nonatomic) id <NSCopying> tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *attentionLostTimeoutDictionary;
@property(copy, nonatomic) NSSet *attentionLostTimeouts; // @dynamic attentionLostTimeouts;
- (void)setAttentionLostTimeout:(double)arg1;
- (unsigned long long)tagIndex;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

