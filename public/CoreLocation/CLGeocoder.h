//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLGeocoderInternal;

@interface CLGeocoder : NSObject
{
    CLGeocoderInternal *_internal;
}

- (void)_notifyError:(id)arg1;
- (void)_notifyCancel;
- (void)_notifyNoResult;
- (void)_notifyPartialResult:(id)arg1;
- (void)_notifyResult:(id)arg1;
- (void)_notifyResult:(id)arg1 error:(id)arg2;
- (void)_ensureMainThreadExecutionContextForBlock:(CDUnknownBlockType)arg1;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3;
- (void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2;
- (void)cancelGeocode;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 preferredLocale:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)geocodeAddressString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)geocodeAddressDictionary:(id)arg1 preferredLocale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)geocodeAddressDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 heading:(double)arg3 localResultsOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isGeocoding) _Bool geocoding;
- (void)dealloc;
- (id)init;
- (void)geocodePostalAddress:(id)arg1 preferredLocale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)geocodePostalAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

