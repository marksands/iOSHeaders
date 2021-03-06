//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FCForYouCatchUpCondition : NSObject
{
    long long _contentTypes;
    CDUnknownBlockType _testBlock;
}

+ (id)caughtUpWithContentTypes:(long long)arg1 orPassingTestBlock:(CDUnknownBlockType)arg2;
+ (id)caughtUpWithContentTypes:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType testBlock; // @synthesize testBlock=_testBlock;
@property(nonatomic) long long contentTypes; // @synthesize contentTypes=_contentTypes;
- (void).cxx_destruct;
- (_Bool)isSatisfiedWithCatchUpOperation:(id)arg1;

@end

