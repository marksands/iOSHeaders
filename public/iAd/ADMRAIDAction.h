//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSURL;

@interface ADMRAIDAction : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    NSURL *_url;
    NSDictionary *_calendarEventInfo;
    struct CGSize _maximumExpandedSize;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)doesURLOpenNews:(id)arg1;
+ (id)descriptionForActionType:(long long)arg1;
@property(retain, nonatomic) NSDictionary *calendarEventInfo; // @synthesize calendarEventInfo=_calendarEventInfo;
@property(nonatomic) struct CGSize maximumExpandedSize; // @synthesize maximumExpandedSize=_maximumExpandedSize;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool opensNewsLink;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end

