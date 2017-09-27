//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage;

@interface _MKPlaceReservationInfo : NSObject
{
    NSString *_attributionProviderDisplayName;
    UIImage *_attributionProviderLogoImage;
    NSArray *_openTimes;
    id <_MKPlaceReservationDelegate> _reservationDelegate;
}

@property(readonly, nonatomic) __weak id <_MKPlaceReservationDelegate> reservationDelegate; // @synthesize reservationDelegate=_reservationDelegate;
@property(readonly, copy, nonatomic) NSArray *openTimes; // @synthesize openTimes=_openTimes;
@property(readonly, nonatomic) UIImage *attributionProviderLogoImage; // @synthesize attributionProviderLogoImage=_attributionProviderLogoImage;
@property(readonly, copy, nonatomic) NSString *attributionProviderDisplayName; // @synthesize attributionProviderDisplayName=_attributionProviderDisplayName;
- (void).cxx_destruct;
- (id)initWithOpenTimes:(id)arg1 attributionProviderName:(id)arg2 providerLogoImage:(id)arg3 delegate:(id)arg4;

@end

