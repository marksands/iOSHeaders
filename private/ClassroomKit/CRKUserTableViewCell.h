//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSTableCell.h"

#import "CRKUserEditorTableViewControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CNAvatarViewController, CNMutableContact, CRKUser, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UITableView, UITextField, UIViewController;

@interface CRKUserTableViewCell : PSTableCell <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, CRKUserEditorTableViewControllerDelegate>
{
    long long mGivenNameCellIndex;
    long long mPhoneticGivenNameCellIndex;
    long long mFamilyNameCellIndex;
    long long mPhoneticFamilyNameCellIndex;
    _Bool _showsFamilyNameFirst;
    _Bool _showsPhoneticName;
    _Bool _editingUser;
    UIViewController *_presentingViewController;
    id <CRKUserTableViewCellDelegate> _delegate;
    CRKUser *_user;
    CNMutableContact *_contact;
    UIImageView *_userImageView;
    CNAvatarViewController *_avatarViewController;
    UILabel *_fullNameLabel;
    UITableView *_editorTableView;
    UIButton *_editButton;
    UITextField *_givenNameTextField;
    UITextField *_phoneticGivenNameTextField;
    UITextField *_familyNameTextField;
    UITextField *_phoneticFamilyNameTextField;
    NSLayoutConstraint *_heightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) __weak UITextField *phoneticFamilyNameTextField; // @synthesize phoneticFamilyNameTextField=_phoneticFamilyNameTextField;
@property(nonatomic) __weak UITextField *familyNameTextField; // @synthesize familyNameTextField=_familyNameTextField;
@property(nonatomic) __weak UITextField *phoneticGivenNameTextField; // @synthesize phoneticGivenNameTextField=_phoneticGivenNameTextField;
@property(nonatomic) __weak UITextField *givenNameTextField; // @synthesize givenNameTextField=_givenNameTextField;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UITableView *editorTableView; // @synthesize editorTableView=_editorTableView;
@property(retain, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(retain, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(retain, nonatomic) CNMutableContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool editingUser; // @synthesize editingUser=_editingUser;
@property(nonatomic) _Bool showsPhoneticName; // @synthesize showsPhoneticName=_showsPhoneticName;
@property(nonatomic) _Bool showsFamilyNameFirst; // @synthesize showsFamilyNameFirst=_showsFamilyNameFirst;
@property(retain, nonatomic) CRKUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <CRKUserTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)makeImagePickerController;
- (void)userEditorTableViewControllerDidFinishEditingUser:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)_didPressEditButton:(id)arg1;
- (void)_didTapUserImage:(id)arg1;
- (struct CGRect)aspectFillFrameForViewOfSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (void)updateShouldShowFamilyNameFirstForNameComponents:(id)arg1;
- (void)updateUserImageView;
- (void)updateHeightConstraint;
- (id)textFieldAtIndex:(long long)arg1;
- (long long)indexForTextField:(id)arg1;
- (void)updateCellIndexes;
- (void)updateCellAccessory;
- (void)userDidChange;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

