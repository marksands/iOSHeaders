//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNContactPickerServiceProtocol.h"

@class UINavigationController;

@protocol CNContactPickerContentViewController <CNContactPickerServiceProtocol>
@property(readonly, nonatomic) UINavigationController *navigationController;
@property(nonatomic) __weak id <CNContactPickerContentDelegate> delegate;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(_Bool)arg1;
@end

