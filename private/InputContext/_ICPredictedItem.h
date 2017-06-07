//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/NSCopying-Protocol.h>
#import <InputContext/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, _ICProactiveTrigger;

@interface _ICPredictedItem : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _itemType;
    _Bool _shouldAggregate;
    unsigned char _flags;
    unsigned char _layoutHint;
    NSString *_identifier;
    _ICProactiveTrigger *_trigger;
    NSString *_label;
    NSString *_value;
    NSString *_name;
    NSDate *_date;
    NSString *_originatingBundleID;
    NSURL *_originatingWebsiteURL;
    unsigned long long _predictionAge;
    double _score;
    NSString *_targetBundleID;
    NSDictionary *_operationData;
}

+ (_Bool)supportsSecureCoding;
+ (id)predictedItemFromQuickTypeItem:(id)arg1 trigger:(id)arg2;
@property(readonly, nonatomic) NSDictionary *operationData; // @synthesize operationData=_operationData;
@property(readonly, nonatomic) NSString *targetBundleID; // @synthesize targetBundleID=_targetBundleID;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) unsigned char layoutHint; // @synthesize layoutHint=_layoutHint;
@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) _Bool shouldAggregate; // @synthesize shouldAggregate=_shouldAggregate;
@property(nonatomic) unsigned long long predictionAge; // @synthesize predictionAge=_predictionAge;
@property(readonly, nonatomic) NSURL *originatingWebsiteURL; // @synthesize originatingWebsiteURL=_originatingWebsiteURL;
@property(readonly, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned char itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) _ICProactiveTrigger *trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToPredictedItem:(id)arg1;
- (_Bool)hasScoreSimilarToItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 itemType:(unsigned char)arg2 score:(double)arg3 value:(id)arg4 label:(id)arg5 name:(id)arg6 date:(id)arg7 originatingBundleID:(id)arg8 originatingWebsiteURL:(id)arg9 predictionAge:(unsigned long long)arg10 shouldAggregate:(_Bool)arg11 flags:(unsigned char)arg12 targetBundleID:(id)arg13 operationData:(id)arg14 proactiveTrigger:(id)arg15;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 value:(id)arg3 label:(id)arg4 name:(id)arg5 date:(id)arg6 originatingBundleID:(id)arg7 originatingWebsiteURL:(id)arg8 predictionAge:(unsigned long long)arg9 shouldAggregate:(_Bool)arg10 flags:(unsigned char)arg11 proactiveTrigger:(id)arg12;

@end

