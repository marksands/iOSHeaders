//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSIndexPath, NTKUpNextElement;

@interface NTKUpNextElementEvent : NSObject <NSCopying>
{
    NTKUpNextElement *_element;
    unsigned long long _type;
    NSIndexPath *_indexPath;
    double _duration;
}

+ (id)eventForElement:(id)arg1 withType:(unsigned long long)arg2 indexPath:(id)arg3 duration:(double)arg4;
+ (id)negativeFeedbackForEvent:(id)arg1 indexPath:(id)arg2;
+ (id)positiveFeedbackForEvent:(id)arg1 indexPath:(id)arg2;
+ (id)tapEventForElement:(id)arg1 indexPath:(id)arg2;
+ (id)elementVisible:(id)arg1 indexPath:(id)arg2 duration:(double)arg3;
+ (id)scrolledEvent;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NTKUpNextElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

