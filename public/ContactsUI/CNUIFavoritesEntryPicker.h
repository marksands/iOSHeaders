//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactActionsControllerDelegate.h"

@class CNContact, CNContactActionsController, NSString, UIAlertController;

@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsControllerDelegate>
{
    id <CNUIFavoritesEntryPickerDelegate> _delegate;
    CNContact *_contact;
    UIAlertController *_alertController;
    CNContactActionsController *_actionsController;
}

+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <CNUIFavoritesEntryPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (id)viewController;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

