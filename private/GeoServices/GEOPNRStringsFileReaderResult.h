//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPNRStringsFileReaderResult : NSObject
{
    NSString *_country;
    NSString *_region;
    NSString *_city;
}

+ (long long)maxPossibleScore;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
- (void).cxx_destruct;
- (_Bool)isPlaceHolderForEmpty;
- (id)aggregateStringWhileInCountry:(id)arg1 forLanguage:(id)arg2 ccOfNumber:(id)arg3;
- (_Bool)shouldOrderCityFirstForLanguage:(id)arg1 phoneNumberInCC:(id)arg2;
- (id)separatorForLanguage:(id)arg1;
@property(readonly, nonatomic) long long score;
- (_Bool)isEqualTo:(id)arg1;
- (id)initWithCountry:(id)arg1 region:(id)arg2 city:(id)arg3;

@end

