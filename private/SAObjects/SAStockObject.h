//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber, NSString;

@interface SAStockObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSString *yearRange;
@property(copy, nonatomic) NSNumber *volume;
@property(copy, nonatomic) NSNumber *timeStamp;
@property(copy, nonatomic) NSString *symbol;
@property(copy, nonatomic) NSArray *stockNews;
@property(copy, nonatomic) NSNumber *status;
@property(copy, nonatomic) NSArray *requests;
@property(copy, nonatomic) NSNumber *realTimeTS;
@property(copy, nonatomic) NSNumber *realTimePrice;
@property(copy, nonatomic) NSNumber *realTimeChangePercent;
@property(copy, nonatomic) NSNumber *realTimeChange;
@property(copy, nonatomic) NSNumber *price;
@property(copy, nonatomic) NSNumber *prevClose;
@property(copy, nonatomic) NSNumber *peRatio;
@property(copy, nonatomic) NSNumber *open;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *marketCap;
@property(copy, nonatomic) NSNumber *low;
@property(copy, nonatomic) NSString *link;
@property(copy, nonatomic) NSNumber *high;
@property(copy, nonatomic) NSNumber *fiftyTwoWeekLow;
@property(copy, nonatomic) NSNumber *fiftyTwoWeekHigh;
@property(copy, nonatomic) NSString *exchange;
@property(copy, nonatomic) NSNumber *earningsPerShare;
@property(copy, nonatomic) NSNumber *dividendYield;
@property(copy, nonatomic) NSString *displayStyle;
@property(copy, nonatomic) NSString *currency;
@property(copy, nonatomic) NSString *chartData;
@property(copy, nonatomic) NSNumber *changePercent;
@property(copy, nonatomic) NSNumber *change;
@property(copy, nonatomic) NSNumber *averageDailyVolume;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

