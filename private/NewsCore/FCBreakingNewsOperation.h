//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCColor, NSArray, NSError, NSString;

@interface FCBreakingNewsOperation : FCOperation
{
    FCCloudContext *_context;
    NSArray *_headlines;
    NSError *_error;
    CDUnknownBlockType _catchUpCompletionHandler;
    NSString *_titleText;
    FCColor *_titleColor;
}

@property(copy) FCColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy) CDUnknownBlockType catchUpCompletionHandler; // @synthesize catchUpCompletionHandler=_catchUpCompletionHandler;
@property(retain) NSError *error; // @synthesize error=_error;
@property(copy) NSArray *headlines; // @synthesize headlines=_headlines;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_checkShouldShowBreakingNewsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

