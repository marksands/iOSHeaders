//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSRestrictions.h"
#import "NSObject.h"
#import "_IKJSRestrictions.h"
#import "_IKJSRestrictionsProxy.h"

@class NSString;

@interface IKJSRestrictions : IKJSObject <NSObject, IKJSRestrictions, _IKJSRestrictionsProxy, _IKJSRestrictions>
{
}

+ (id)restrictionsDidChangeNotificationName;
- (id)_contentRestrictionsCountryCode;
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;
@property(readonly, nonatomic) _Bool allowsShowingUndownloadedMovies;
@property(readonly, nonatomic) _Bool allowsShowingUndownloadedTVShows;
@property(readonly, nonatomic) _Bool allowsITunes;
@property(readonly, nonatomic) _Bool allowsExplicit;
@property(readonly, nonatomic) _Bool allowsErotica;
@property(readonly, nonatomic) _Bool allowArtistActivity;
- (id)maxTVShowRatingForCountry:(id)arg1;
- (id)maxMovieRatingForCountry:(id)arg1;
@property(readonly, nonatomic) _Bool appAnalyticsAllowed;
@property(readonly, nonatomic) _Bool appInstallationAllowed;
@property(readonly, nonatomic) NSString *maxAppRating;
@property(readonly, nonatomic) long long maxTVShowRank;
@property(readonly, nonatomic) long long maxMovieRank;
@property(readonly, nonatomic) long long maxAppRank;
- (id)asPrivateIKJSRestrictions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

