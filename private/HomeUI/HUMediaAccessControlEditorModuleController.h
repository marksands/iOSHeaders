//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import "HUSwitchCellDelegate.h"
#import "UITextFieldDelegate.h"

@class HFMediaAccessControlEditorItemModule, NSString;

@interface HUMediaAccessControlEditorModuleController : HUItemTableModuleController <UITextFieldDelegate, HUSwitchCellDelegate>
{
    id <HUMediaAccessControlEditorModuleControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HUMediaAccessControlEditorModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)updateAccessControlDescriptor:(id)arg1;
- (id)initWithModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HFMediaAccessControlEditorItemModule *module; // @dynamic module;
@property(readonly) Class superclass;

@end

