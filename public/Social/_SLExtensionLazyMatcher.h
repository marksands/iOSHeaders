//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSExtension, NSString;

__attribute__((visibility("hidden")))
@interface _SLExtensionLazyMatcher : NSObject
{
    NSString *_identifier;
    NSExtension *_extension;
    long long _firstMatchOnceToken;
    id _matchingContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSExtension *extension;
- (id)initWithIdentifier:(id)arg1;

@end

