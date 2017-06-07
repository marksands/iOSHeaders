//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CellularPlanManager/NSCopying-Protocol.h>
#import <CellularPlanManager/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isSelected;
    _Bool _isBootstrap;
    NSData *_profileId;
    NSString *_iccid;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
@property(copy, nonatomic) NSData *profileId; // @synthesize profileId=_profileId;
@property(nonatomic) _Bool isBootstrap; // @synthesize isBootstrap=_isBootstrap;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProfileId:(id)arg1 iccid:(id)arg2 selected:(_Bool)arg3 bootstrap:(_Bool)arg4;

@end
