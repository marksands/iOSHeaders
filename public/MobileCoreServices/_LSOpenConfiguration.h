//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSURL;

@interface _LSOpenConfiguration : NSObject <NSSecureCoding>
{
    _Bool _ignoreOpenStrategy;
    NSDictionary *_frontBoardOptions;
    NSURL *_referrerURL;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSURL *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(nonatomic) _Bool ignoreOpenStrategy; // @synthesize ignoreOpenStrategy=_ignoreOpenStrategy;
@property(copy, nonatomic) NSDictionary *frontBoardOptions; // @synthesize frontBoardOptions=_frontBoardOptions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end

