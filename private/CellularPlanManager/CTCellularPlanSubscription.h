//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CTCellularPlanSubscription : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _autoRenew;
    int _planType;
    int _planStatus;
    int _accountStatus;
    int _subscriptionResult;
    NSString *_iccid;
    double _billingStartDate;
    double _billingEndDate;
    NSString *_carrierName;
    NSString *_planDescription;
    NSString *_accountURL;
    double _timestamp;
    NSArray *_homeCountryList;
    NSArray *_dataUsage;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int subscriptionResult; // @synthesize subscriptionResult=_subscriptionResult;
@property(readonly, nonatomic) NSArray *dataUsage; // @synthesize dataUsage=_dataUsage;
@property(readonly, nonatomic) NSArray *homeCountryList; // @synthesize homeCountryList=_homeCountryList;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *accountURL; // @synthesize accountURL=_accountURL;
@property(readonly, nonatomic) int accountStatus; // @synthesize accountStatus=_accountStatus;
@property(nonatomic) int planStatus; // @synthesize planStatus=_planStatus;
@property(readonly, nonatomic) NSString *planDescription; // @synthesize planDescription=_planDescription;
@property(readonly, nonatomic) int planType; // @synthesize planType=_planType;
@property(nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(readonly, nonatomic) double billingEndDate; // @synthesize billingEndDate=_billingEndDate;
@property(readonly, nonatomic) double billingStartDate; // @synthesize billingStartDate=_billingStartDate;
@property(readonly, nonatomic) _Bool autoRenew; // @synthesize autoRenew=_autoRenew;
@property(readonly, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualOrNewerThanSubscription:(id)arg1;
- (id)initWithIccid:(id)arg1 subscriptionResult:(int)arg2 autoRenew:(_Bool)arg3 billingStartDate:(double)arg4 billingEndDate:(double)arg5 carrierName:(id)arg6 planType:(int)arg7 planDescription:(id)arg8 planStatus:(int)arg9 accountStatus:(int)arg10 accountURL:(id)arg11 timestamp:(double)arg12 homeCountryList:(id)arg13 dataUsage:(id)arg14;

@end

