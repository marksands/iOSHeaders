//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface CKHistoricEvent : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: _firstSeen
    // Error parsing type: , name: _lastSeen
    // Error parsing type: , name: _frequency
    // Error parsing type: , name: _lastDuration
    // Error parsing type: , name: _totalDuration
    // Error parsing type: , name: _metadata
}

+ (id)identifierWithPrefix:(id)arg1 intent:(id)arg2 error:(id *)arg3;
+ (_Bool)supportsSecureCoding;
+ (id)dateFormat;
+ (id)EventIdSeparator;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
- (id)init:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithIdentifier:(id)arg1 firstSeen:(id)arg2 lastSeen:(id)arg3 frequency:(long long)arg4 lastDuration:(double)arg5 totalDuration:(double)arg6 metadata:(id)arg7;
@property(nonatomic, readonly) NSDictionary *metadata;
@property(nonatomic, readonly) double totalDuration;
@property(nonatomic, readonly) double lastDuration;
@property(nonatomic, readonly) long long frequency;
@property(nonatomic, readonly) NSDate *lastSeen;
@property(nonatomic, readonly) NSDate *firstSeen;
@property(nonatomic, copy) NSDictionary *_metadata; // @synthesize _metadata;
@property(nonatomic) double _totalDuration; // @synthesize _totalDuration;
@property(nonatomic) double _lastDuration; // @synthesize _lastDuration;
@property(nonatomic) long long _frequency; // @synthesize _frequency;
@property(nonatomic, copy) NSDate *_lastSeen; // @synthesize _lastSeen;
@property(nonatomic, copy) NSDate *_firstSeen; // @synthesize _firstSeen;
@property(nonatomic, readonly) NSString *identifier; // @synthesize identifier;

@end

