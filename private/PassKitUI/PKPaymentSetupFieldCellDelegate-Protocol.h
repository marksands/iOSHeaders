//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPaymentSetupFieldCell;

@protocol PKPaymentSetupFieldCellDelegate <NSObject>

@optional
- (_Bool)fieldCellEditableTextFieldShouldClear:(PKPaymentSetupFieldCell *)arg1;
- (_Bool)fieldCellEditableTextFieldShouldReturn:(PKPaymentSetupFieldCell *)arg1;
- (void)fieldCellEditableTextFieldValueDidChange:(PKPaymentSetupFieldCell *)arg1;
- (_Bool)fieldCellEditableTextFieldShouldBeginEditing:(PKPaymentSetupFieldCell *)arg1;
@end

