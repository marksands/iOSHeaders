//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOCAddTagView, NSString;

@protocol DOCAddTagTextFieldDelegate <NSObject>
- (_Bool)addTagTextField:(DOCAddTagView *)arg1 userDidCreateTagWithName:(NSString *)arg2;
- (void)addTagTextFieldDidChange:(DOCAddTagView *)arg1;
- (void)addTagTextFieldDidEndEditing:(DOCAddTagView *)arg1;
- (void)addTagTextFieldDidBeginEditing:(DOCAddTagView *)arg1;
@end

