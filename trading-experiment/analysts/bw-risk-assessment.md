# BW Risk Assessment — Risk Management Report
**Date: 2026-08-18 (Tuesday), ~14:41 ET**

*Persona: Bridgewater-style risk analyst, radical transparency. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes` on account 424593861) at report time. All weights below are recomputed fresh this run, not carried over from BR/MS or from this morning's own 10:4x read.*

---

## Overall Portfolio Risk Grade: **C**

## Single biggest risk right now
**Both of this morning's live risk vectors have gotten worse, not better, and the book still has no ballast against either.** Since the 10:4x report: (1) the 10-year yield touched 4.73-4.75% intraday today — Bloomberg frames it as the highest since early 2025, a separate Seeking Alpha headline frames the 4.75% print as not seen since 2007; sources disagree on the historical comparison but agree on the level, which sits exactly on rule 6a's trigger line. This is one *intraday* touch, not yet a confirmed close, let alone the two consecutive closes rule 6a requires — so the trigger has **not** fired, but it has never been closer. (2) The Hormuz situation escalated from posturing to an actual kinetic event: the UAE reports its air defenses detected two ballistic missiles launched from Iran, one landing outside its territorial waters and one landing inside them. That is a materially different fact pattern than this morning's "bombing threats and a reported tanker strike" — it is a direct missile launch at a third country, not commentary. Trump separately claimed the strait is "open and operating," which is disputed and not corroborated by shipping-traffic data. Nothing in the five-position book is negatively correlated to either vector except XLE's narrow offset to vector (2) specifically. The portfolio's structural gap — no cash-like or inverse ballast — is unchanged from this morning; what changed is that both catalysts sitting on top of that gap are now more real, not less.

---

## Live position snapshot (Robinhood-verified, ~14:41 ET)

| Symbol | Qty | Avg cost | Price now | Day chg | Position value | % of equity | % of pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $220.07 | -2.20% | $5.46 | 12.25% | 10.80% |
| VTI | 0.043290 | $370.76 | $379.57 | -0.67% | $16.43 | 36.84% | 32.47% |
| VXUS | 0.154525 | $84.13 | $86.52 | -1.54% | $13.37 | 29.97% | 26.42% |
| OMCL | 0.106405 | $46.99 | $35.97 | -0.17% | $3.83 | 8.58% | 7.56% |
| XLE | 0.086775 | $57.62 | $63.54 | +1.53% | $5.51 | 12.36% | 10.90% |
| **Cash (deployable)** | — | — | — | — | $6.00 | — | 11.86% |

Equity value $44.60, total account value $100.61, pool (÷ $50 reserve) ≈ $50.61. NVDA+OMCL combined single-stock exposure = **20.83% of equity** — down slightly from this morning's 21.0% (OMCL drifted lower, NVDA roughly flat as a share of a slightly smaller equity base). Neither single-name trigger (18-20%) nor the combined trigger (25%) is breached. OMCL remains the standout: -23.5% below its $46.99 average cost, the only position underwater and the only one where day-of-report price action (-0.17%) understates the standing drawdown.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 20.83% of equity combined, under both triggers, essentially flat vs. this morning |
| Correlation / lack of true diversification | 🔴 High | VTI and VXUS are both long-only equity beta; NVDA is a levered subset of VTI's own top holding; nothing in the book is negatively correlated to a general risk-off tape |
| Sector concentration | 🟡 Medium | Effective tech/AI exposure (NVDA + VTI's embedded mega-cap tech weight) remains the largest single factor bet in the book |
| Geographic / currency exposure | 🟡 Medium | ~70% of equity is USD-domestic (NVDA, OMCL, XLE, plus VTI); VXUS (29.97% of equity) is the only unhedged FX sleeve |
| Interest-rate / duration sensitivity | 🔴 High | 10yr touched 4.73-4.75% intraday today — on rule 6a's trigger line, one confirmed close away, with a second consecutive close still needed |
| Geopolitical / Hormuz-oil shock | 🔴 High (escalated) | UAE detected two ballistic missiles launched from Iran today — a genuine kinetic event, not just threats; strait remains effectively closed to commercial traffic despite Trump's disputed "open and operating" claim |
| Liquidity risk | 🟡 Medium (OMCL) / 🟢 Low (others) | NVDA/VTI/VXUS/XLE mega-liquid; OMCL has shown a visibly wide bid/ask in recent sessions — smallest, hardest-to-exit position in the book |
| Recession / broad drawdown | 🟡 Medium | See stress test below — no position is recession-proof |
| Tail risk (tail scenarios) | 🔴 High | The "escalation beyond posturing" scenario flagged this morning at 10-15% probability has partially realized today — see revised scenarios below |
| Hedging capacity | 🔴 High (gap) | Equities-only toolbox, ~$50 pool — no options, no practical inverse-ETF sizing at this scale; cash is effectively the only real hedge available, and only 11.9% of pool is held there |

---

## Correlation analysis
- **VTI vs. VXUS**: high positive correlation in risk-off regimes — both red again today. VXUS does not diversify against a global rate shock or a Hormuz-driven oil/inflation shock, both of which remain live.
- **NVDA vs. VTI**: NVDA is economically a levered, undiversified slice of VTI's own largest sector bet — one AI/mega-cap-tech factor bet sized across two positions.
- **XLE vs. everything else**: the one position with a plausible negative-to-neutral correlation to the rest of the book today, and that relationship strengthened with the missile-launch news (+1.53% on the day while the other four are red). Not a durable hedge — flips in a demand-shock recession.
- **OMCL**: lowest correlation to the other four, genuinely the most diversifying position in the book, undercut by its size (8.6% of equity) and liquidity profile.

## Sector concentration (approximate, equity value basis)
- AI/semiconductors (direct): NVDA ≈ 12.3% of equity
- Broad-market equity beta, mega-cap-tech-weighted: VTI ≈ 36.8% of equity (embeds a further, unquantified tech overweight)
- International developed + EM diversified: VXUS ≈ 30.0% of equity
- Healthcare IT: OMCL ≈ 8.6% of equity
- Energy: XLE ≈ 12.4% of equity

Read plainly: over half the book (NVDA + VTI's embedded tech weight) remains a bet on one macro factor — AI/mega-cap tech multiples — which is also the factor most exposed to today's rate shock.

## Geographic exposure and currency risk
- USD-domestic, unhedged-FX-irrelevant: NVDA, OMCL, XLE, and VTI ≈ 70% of equity.
- VXUS ≈ 30% of equity is the book's entire non-USD currency exposure — developed-ex-US and EM currencies, fully unhedged. Unchanged largest single currency bet in the portfolio.

## Interest-rate sensitivity by position
- **NVDA**: high. MS's own DCF (WACC 11%, g 3%) already shows meaningful downside; today's rate print compresses the multiple further before any fundamentals move.
- **OMCL**: high. Small-cap growth healthcare IT — discount-rate sensitive, compounded by the standing post-earnings drawdown.
- **VTI**: moderate-high. Market-cap weighted, mega-cap/tech-heavy, inherits much of NVDA's duration profile in aggregate.
- **VXUS**: moderate. Somewhat lower duration than VTI historically, not immune.
- **XLE**: low, arguably inverse — the one position currently working with the rate move rather than against it, and today the *only* green position in the book.

## Recession stress test (estimated peak drawdown, illustrative ranges based on historical sector/asset-class behavior in broad equity bear markets)
| Position | Estimated drawdown in a recessionary bear | Basis |
|---|---|---|
| NVDA | -45% to -60% | High-beta semis/AI drew down ~45-65% in 2022's growth-multiple compression; a recession adds demand-side downside |
| VTI | -25% to -35% | Broad US market historical recession bear range, skewed toward the higher end given elevated starting valuations/duration |
| VXUS | -25% to -35% | Similar broad-market range; EM sleeve adds tail variance in a global slowdown |
| OMCL | -35% to -50% | Small-cap growth healthcare IT — small-caps historically draw down more than large-caps, compounded by idiosyncratic guidance risk already visible |
| XLE | -30% to -55% | Wide range by design: a demand-shock recession hits energy hardest of all five; a supply-shock/inflationary recession (the current Hormuz-adjacent regime) could see energy hold up or rally while everything else falls |

**Blended portfolio estimate**: roughly -30% to -40% peak-to-trough on the $44.60 equity sleeve in a genuine recessionary bear, i.e. an estimated $13-18 equity drawdown (pool-level: -26% to -36%, since deployable cash is untouched). Trivial in absolute dollars at this account size, but the percentage exposure is the number that should drive sizing discipline as the book scales.

## Liquidity risk by holding
- NVDA, VTI, VXUS, XLE: **Low** — mega-cap stock and among the largest ETFs on the market, effectively unlimited liquidity at this position size.
- OMCL: **Medium** — a mid/small-cap single name with a visibly wide bid/ask spread in recent sessions. At current fractional-share size not urgent, but the one position where exit costs are not negligible if it ever needs to be sold in size.

## Single-stock risk and position sizing
- NVDA (12.25% of equity) and OMCL (8.58% of equity) remain the book's only true single-name risk; combined 20.83% of equity sits under both the 18-20% single-name and 25% combined triggers, no forced review fires today.
- Standing recommendation unchanged: hold both single-name triggers as hard mandatory-review lines, not soft guidance.
- Unchanged from this morning, now more urgent: if the 10yr closes above 4.75% on two consecutive sessions, treat that as a second, independent reason (on top of any concentration trigger) to pause any NVDA or OMCL add — today's intraday print is the closest that trigger has come to firing.
- New this run: the actual missile launch (vs. this morning's threats/single-strike reports) raises the bar for what "de-escalation" would need to look like before XLE-vs-rest correlation logic changes; it does not change single-name sizing directly, but it strengthens the case against adding to NVDA/OMCL specifically while both vectors remain live.

## Tail risk scenarios
| Scenario | Rough probability (next 2-4 weeks) | Portfolio impact |
|---|---|---|
| Hormuz situation escalates further — sustained kinetic exchange beyond today's missile launches (e.g., strikes on shipping, casualties, direct US-Iran engagement) | ~15-20% (raised from this morning's 10-15%; today's UAE missile detection is the first confirmed kinetic launch, not just posturing) | Oil spikes further (XLE up sharply), but broad risk-off almost certainly dominates and drags NVDA/VTI/VXUS down harder than XLE's gain offsets — net portfolio negative despite XLE's rally |
| 10yr closes >4.75% on two consecutive sessions, tripping rule 6a | ~35-45% (raised from this morning's 30-40%; the intraday print already touched the threshold) | Multiple compression concentrated in NVDA/OMCL/VTI's tech-heavy core; the most probable near-term negative catalyst on this list |
| Hormuz situation de-escalates (a real signed reopening, not disputed unilateral claims) | ~10-15% (lowered; today's missile launch makes a near-term resolution less likely than this morning's read) | Oil gives back gains, XLE underperforms, everything else likely relieved-rally; portfolio net positive but XLE position lags |
| Idiosyncratic OMCL negative catalyst (contract loss, guidance cut) before next print | ~5-10% | Small dollar impact given position size, but would confirm a structural thesis break per the standing OMCL contingency plan and should trigger a trim, not a hold |
| Broad AI-capex/NVDA-specific de-rating independent of rates (bubble-unwind narrative) | ~15-20% | Concentrated hit to NVDA and VTI's embedded tech weight simultaneously — the correlation risk flagged above realized |

## Hedging strategies for the top 3 risks (equities-only, no options)
1. **Correlation/no-ballast risk (top risk)**: cash is the only real lever at this account size. Treat the current 11.9%-of-pool deployable cash as a floor, not a ceiling, to defend — resist deploying it into new adds while both the rate-shock and Hormuz vectors are live and now more confirmed than this morning, even where BR's policy targets show a gap (e.g., NVDA's underweight). A policy gap is not a green light on a day when the thing that would fill it (more equity beta) is exactly the wrong instrument for the risk in front of us.
2. **Interest-rate/duration risk**: no bond or cash-equivalent ETF is currently held. Today's intraday 4.73-4.75% print has not yet triggered rule 6a (needs two consecutive closes), but if/when it does, the practical equities-only response is to pause — hold off on adding to NVDA/OMCL specifically, and let XLE's naturally low duration continue doing the ballast work it's already doing.
3. **Geopolitical/Hormuz risk**: XLE is already a partial, if narrow, offset — the position should not be trimmed while this risk is live and escalating, even though MS's do-not-add stance argues against sizing up further. Hold, don't add, don't trim, until either the desk posts a fresh read or the situation resolves materially in either direction. Today's news makes "hold" the more clearly correct call than it was this morning, not less.

## Rebalancing suggestions
- VTI is running ~2.5pp over a 30% pool target, VXUS ~1.4pp over a 25% pool target (per BR's own framework) — a modest trim toward target band would be defensible on valuation-discipline grounds, but I would not initiate it purely for rebalancing today: trimming reduces the equity sleeve into a day when nothing in the book needs de-risking more urgently than by not adding, and the marginal transaction cost at this position size isn't worth it.
- Where I differ from BR: I would not treat NVDA's underweight as an add signal right now. Filling a policy gap by adding equity beta on a day with two live, correlated, and today-escalated risk-off catalysts inverts the actual risk priority — cash preservation should outrank policy-target precision until at least one of today's two live vectors clears.
- If/when new capital is deployed, my preference order for risk purposes is unchanged: (1) let deployable cash rise toward a higher floor than the current 11.9% of pool, given the toolbox has no other hedge; (2) any equity add should go toward the position with the lowest correlation to the rest of the book (OMCL) rather than the position with the highest (NVDA), even though NVDA shows the bigger "gap" on BR's framework.

---
*Prior report: consult `git log -p -- trading-experiment/analysts/bw-risk-assessment.md` for history.*
