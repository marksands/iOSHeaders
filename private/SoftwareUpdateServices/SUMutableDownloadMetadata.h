//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SoftwareUpdateServices/SUDownloadMetadata.h>

@interface SUMutableDownloadMetadata : SUDownloadMetadata
{
}

- (void)applyDownloadPolicy:(id)arg1;
- (id)initWithMetadata:(id)arg1;

// Remaining properties
@property(nonatomic) int downloadFeeAgreementStatus; // @dynamic downloadFeeAgreementStatus;
@property(nonatomic) _Bool enforceWifiOnlyOverride; // @dynamic enforceWifiOnlyOverride;
@property(nonatomic) int termsAndConditionsAgreementStatus; // @dynamic termsAndConditionsAgreementStatus;

@end

