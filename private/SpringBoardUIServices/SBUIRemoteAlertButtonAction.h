//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@interface SBUIRemoteAlertButtonAction : BSAction
{
}

- (void)sendResponseWithUnHandledEvents:(long long)arg1;
@property(readonly, nonatomic) long long events;
- (void)sendResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithEvents:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithEvents:(long long)arg1;

@end

