//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UXCollectionViewLayout;
@protocol UXCollectionViewLayoutProxyDelegate;

@interface _UXCollectionViewLayoutProxy : NSObject
{
    id <UXCollectionViewLayoutProxyDelegate> _delegate;
    UXCollectionViewLayout *_layout;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
+ (Class)class;
@property(readonly, nonatomic) UXCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) id <UXCollectionViewLayoutProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (Class)class;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

@end
