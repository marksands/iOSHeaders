//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BarcodeSupport/BCSActionPickerItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSCopyActionPickerItem : BCSActionPickerItem
{
    NSString *_textToCopy;
}

@property(readonly, copy, nonatomic) NSString *textToCopy; // @synthesize textToCopy=_textToCopy;
- (void).cxx_destruct;
- (_Bool)isCopyActionItem;
- (void)performAction;
- (id)initWithAction:(id)arg1 textToCopy:(id)arg2;

@end

