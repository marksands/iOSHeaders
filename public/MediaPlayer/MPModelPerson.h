//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelPerson : MPModelObject
{
    _Bool _hasSocialPosts;
    NSString *_name;
}

+ (id)__MPModelPropertyPersonHasSocialPosts__PROPERTY;
+ (id)__hasSocialPosts__KEY;
+ (id)__MPModelPropertyPersonName__PROPERTY;
+ (id)__name__KEY;
@property(nonatomic) _Bool hasSocialPosts; // @synthesize hasSocialPosts=_hasSocialPosts;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;

@end

