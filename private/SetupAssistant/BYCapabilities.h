//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BYCapabilities : NSObject
{
}

+ (id)sharedCapabilities;
- (_Bool)mgHasMesa;
- (_Bool)mgHasSecureElement;
- (_Bool)mgHasSiriCapability;
- (_Bool)canShowAppleIDScreen;
- (_Bool)canShowPasscodeScreen;
- (_Bool)canShowTouchIDScreen;
- (_Bool)_paymentScreenRequirementsIncludeiCloud:(id)arg1;
- (_Bool)_paymentScreenRequirementsIncludePasscode:(id)arg1;
- (id)_paymentScreenRequirements;
- (_Bool)canShowPaymentScreen;
- (_Bool)canShowSiriScreen;

@end

