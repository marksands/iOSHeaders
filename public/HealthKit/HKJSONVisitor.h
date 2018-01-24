//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HKJSONVisitor : NSObject
{
    id <HKJSONVisitorDelegate> _delegate;
    id _JSONObject;
    NSString *_currentKeyPath;
    NSArray *_allKeyPathComponents;
    long long _currentIndex;
}

+ (id)visitorWithJSONObject:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, copy, nonatomic) NSArray *allKeyPathComponents; // @synthesize allKeyPathComponents=_allKeyPathComponents;
@property(readonly, copy, nonatomic) NSString *currentKeyPath; // @synthesize currentKeyPath=_currentKeyPath;
- (void).cxx_destruct;
- (long long)_visitPrimitive:(id)arg1;
- (long long)_visitArray:(id)arg1;
- (long long)_visitDictionary:(id)arg1;
- (long long)_traverseJSONObject:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lastKeyPathComponent;
- (void)traverseJSONObject;

@end

