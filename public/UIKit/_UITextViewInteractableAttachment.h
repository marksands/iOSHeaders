//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UITextViewInteractableItem.h>

@class NSTextAttachment;

__attribute__((visibility("hidden")))
@interface _UITextViewInteractableAttachment : _UITextViewInteractableItem
{
    NSTextAttachment *_attachment;
}

+ (id)interactableLinkWithAttachment:(id)arg1 range:(struct _NSRange)arg2;
@property(retain, nonatomic) NSTextAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)_saveToCameraRoll;
- (void)_copyImage;
- (id)defaultAction;
- (id)actions;
- (_Bool)allowInteraction:(long long)arg1;
- (id)_image;
- (id)localizedTitle;

@end

