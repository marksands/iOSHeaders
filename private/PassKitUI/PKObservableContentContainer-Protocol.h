//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/UIContentContainer-Protocol.h>

@protocol PKContentContainerObserver;

@protocol PKObservableContentContainer <UIContentContainer>
- (void)removeContentContainerObserver:(id <PKContentContainerObserver>)arg1;
- (void)addContentContainerObserver:(id <PKContentContainerObserver>)arg1;
@end

