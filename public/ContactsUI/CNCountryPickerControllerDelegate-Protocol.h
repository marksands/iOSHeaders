//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationControllerDelegate.h"

@class CNCountryPickerController, NSString;

@protocol CNCountryPickerControllerDelegate <UINavigationControllerDelegate>
- (void)countryPickerDidCancel:(CNCountryPickerController *)arg1;
- (void)countryPicker:(CNCountryPickerController *)arg1 didPickCountryCode:(NSString *)arg2;
@end

