# BW Risk Assessment — Risk Management Report
**Date: 2026-08-19 (Wednesday), ~11:3x ET**

*Persona: Bridgewater-style risk analyst, radical transparency. Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes` on account 424593861) at report time. All weights below are recomputed fresh this run, not carried over from BR/MS or from the prior BW report.*

---

## Overall Portfolio Risk Grade: **C+** (up from C, 8/18 ~14:41 ET)

## Single biggest risk right now
**The structural gap is unchanged — no cash-like or inverse ballast against a five-position book that is entirely long equity beta — but both of the acute vectors sitting on top of that gap eased today rather than worsened, and that distinction matters for an honest grade.** Confirmed via fresh WebSearch this run: (1) the 10-year yield eased to **4.70%**, moving further from rule 6a's 4.75% two-consecutive-close trigger rather than toward it — the second straight session of relief after Tuesday's 4.75% intraday scare. (2) The 30-year, which BR flagged hard yesterday (5.323% intraday, 5.294% close — a fresh 19-year high), eased modestly further to **5.285%** today — still historically elevated and still the desk's standing flag on NVDA's discount-rate exposure, but not accelerating. (3) On Hormuz: no further escalation beyond yesterday's UAE missile-detection story — Iran's Foreign Ministry is now denying it launched anything at the UAE, and today's incremental news (an Iranian general warning Gulf states against helping the US military) is rhetoric, not a new kinetic event. **Read plainly: today is a genuine, if modest, de-escalation on both of the two vectors this desk has spent the last two days calling the book's top risk — the grade moves up one notch to reflect that honestly, not down to reflect it grudgingly.** The single biggest risk going forward is unchanged in kind, though: this book still has zero instruments that gain when the other four lose (XLE is a partial, narrow, regime-dependent offset at best), and that structural fact doesn't improve just because today's headlines did.

---

## Live position snapshot (Robinhood-verified, ~11:3x ET)

| Symbol | Qty | Avg cost | Price now | Day chg | Position value | % of equity | % of pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $219.085 | -0.30% | $5.44 | 12.11% | 10.68% |
| VTI | 0.043290 | $370.76 | $380.892 | +0.49% | $16.49 | 36.70% | 32.38% |
| VXUS | 0.154525 | $84.13 | $87.195 | +0.87% | $13.47 | 29.99% | 26.46% |
| OMCL | 0.106405 | $46.99 | $37.18 | **+3.36%** | $3.96 | 8.80% | 7.77% |
| XLE | 0.086775 | $57.62 | $64.085 | +0.64% | $5.56 | 12.38% | 10.92% |
| **Cash (deployable)** | — | — | — | — | $6.00 | — | 11.78% |

Equity value ≈$44.92, total account value ≈$100.93, pool (÷ $50 reserve) ≈ $50.93. NVDA+OMCL combined single-stock exposure = **20.91% of equity** — essentially flat vs. yesterday's 20.83%, still comfortably under both the 18-20% single-name and 25% combined triggers (~4.09pp buffer on the combined trigger). **OMCL is today's standout, and not in a reassuring way**: +3.36% is its third-plus consecutive green session with no company-specific catalyst this desk, MS, or GS have been able to identify — still down ~20.9% from its $46.99 average cost, but a momentum run this persistent without an explanation is itself a thing to watch, not just a gain to note. XLE also printed a fresh session high ($64.085, day's second-best performer) — the hedge continuing to do its job on a day when Hormuz didn't escalate further but oil-linked strength persisted regardless.

---

## Risk heat map

| Risk category | Level | Notes |
|---|---|---|
| Single-stock concentration (NVDA+OMCL) | 🟡 Medium | 20.91% of equity combined, under both triggers, flat vs. yesterday |
| Correlation / lack of true diversification | 🔴 High | VTI and VXUS are both long-only equity beta; NVDA is a levered subset of VTI's own top holding; nothing in the book is negatively correlated to a general risk-off tape |
| Sector concentration | 🟡 Medium | Effective tech/AI exposure (NVDA + VTI's embedded mega-cap tech weight) remains the largest single factor bet in the book |
| Geographic / currency exposure | 🟡 Medium | ~70% of equity is USD-domestic (NVDA, OMCL, XLE, plus VTI); VXUS (29.99% of equity) is the only unhedged FX sleeve |
| Interest-rate / duration sensitivity | 🟡 Medium (improved from 🔴 High) | Both the 10yr (4.70%, easing) and 30yr (5.285%, easing modestly) moved away from their respective stress levels today — genuine, if fragile, relief; rule 6a not fired and further from firing than yesterday |
| Geopolitical / Hormuz-oil shock | 🟡 Medium (improved from 🔴 High) | No fresh kinetic event since yesterday's UAE missile-detection story; Iran is now denying it launched anything — a de-escalation in the information environment even though the underlying standoff (Strait still effectively closed, no signed deal) is unresolved |
| Liquidity risk | 🟡 Medium (OMCL) / 🟢 Low (others) | NVDA/VTI/VXUS/XLE mega-liquid; OMCL has shown a visibly wide bid/ask in recent sessions — smallest, hardest-to-exit position in the book |
| Recession / broad drawdown | 🟡 Medium | See stress test below — no position is recession-proof |
| Tail risk (tail scenarios) | 🟡 Medium (improved from 🔴 High) | Both near-term catalysts (rate close, Hormuz kinetic escalation) that drove yesterday's elevated tail-risk table cooled off today — see revised scenarios below |
| Hedging capacity | 🔴 High (gap, unchanged) | Equities-only toolbox, ~$51 pool — no options, no practical inverse-ETF sizing at this scale; cash is effectively the only real hedge available, and only 11.78% of pool is held there — a structural gap that a good news day does not close |

---

## Correlation analysis
- **VTI vs. VXUS**: high positive correlation in risk-off regimes; today both are green together on the same broad-relief tape (VTI +0.49%, VXUS +0.87%) — confirmation the correlation runs both directions, not just on down days.
- **NVDA vs. VTI**: NVDA is economically a levered, undiversified slice of VTI's own largest sector bet — one AI/mega-cap-tech factor bet sized across two positions. NVDA is the one position in the red today (-0.30%) despite the broad-market tailwind — a mild company-level divergence worth naming, though nothing in this desk's WebSearch this run surfaces a specific NVDA negative beyond already-logged, non-structural items.
- **XLE vs. everything else**: still the book's one plausible low-to-negative-correlation holding, and it printed a fresh session high today even without a fresh Hormuz escalation to lean on — oil-linked strength is proving somewhat durable independent of the day's headline flow, which is a mildly reassuring data point for the hedge's robustness, not just its existence.
- **OMCL**: lowest correlation to the other four on a company-specific basis, genuinely the most diversifying position in the book — but today's +3.36% move with no identified catalyst, on top of a multi-session unexplained run, is a reminder that "low correlation" and "well-understood" are not the same thing. This desk cannot currently explain what is driving OMCL's price action, and radical transparency means saying that plainly rather than quietly assuming it's benign.

## Sector concentration (approximate, equity value basis)
- AI/semiconductors (direct): NVDA ≈ 12.1% of equity
- Broad-market equity beta, mega-cap-tech-weighted: VTI ≈ 36.7% of equity (embeds a further, unquantified tech overweight)
- International developed + EM diversified: VXUS ≈ 30.0% of equity
- Healthcare IT: OMCL ≈ 8.8% of equity
- Energy: XLE ≈ 12.4% of equity

Read plainly: essentially half the book (NVDA + VTI's embedded tech weight) remains a bet on one macro factor — AI/mega-cap tech multiples — which is also the factor most exposed to whichever way the rate story breaks next.

## Geographic exposure and currency risk
- USD-domestic, unhedged-FX-irrelevant: NVDA, OMCL, XLE, and VTI ≈ 70% of equity.
- VXUS ≈ 30% of equity is the book's entire non-USD currency exposure — developed-ex-US and EM currencies, fully unhedged. Unchanged largest single currency bet in the portfolio.

## Interest-rate sensitivity by position
- **NVDA**: high. MS's own DCF (WACC 11%, g 3%) still shows ~31.8% downside; today's rate easing is a mild tailwind for the multiple, but the 30-year's still-elevated level keeps discount-rate pressure live.
- **OMCL**: high. Small-cap growth healthcare IT — discount-rate sensitive, compounded by the standing post-earnings drawdown and today's unexplained momentum.
- **VTI**: moderate-high. Market-cap weighted, mega-cap/tech-heavy, inherits much of NVDA's duration profile in aggregate.
- **VXUS**: moderate. Somewhat lower duration than VTI historically, not immune.
- **XLE**: low, arguably inverse — the position least dependent on the rate story either way, driven instead by the Hormuz/oil premium.

## Recession stress test (estimated peak drawdown, illustrative ranges based on historical sector/asset-class behavior in broad equity bear markets)
| Position | Estimated drawdown in a recessionary bear | Basis |
|---|---|---|
| NVDA | -45% to -60% | High-beta semis/AI drew down ~45-65% in 2022's growth-multiple compression; a recession adds demand-side downside |
| VTI | -25% to -35% | Broad US market historical recession bear range, skewed toward the higher end given elevated starting valuations/duration |
| VXUS | -25% to -35% | Similar broad-market range; EM sleeve adds tail variance in a global slowdown |
| OMCL | -35% to -50% | Small-cap growth healthcare IT — small-caps historically draw down more than large-caps, compounded by idiosyncratic guidance risk already visible |
| XLE | -30% to -55% | Wide range by design: a demand-shock recession hits energy hardest of all five; a supply-shock/inflationary recession (the current Hormuz-adjacent regime) could see energy hold up or rally while everything else falls |

**Blended portfolio estimate**: roughly -30% to -40% peak-to-trough on the ~$44.92 equity sleeve in a genuine recessionary bear, i.e. an estimated $13-18 equity drawdown (pool-level: -26% to -36%, since deployable cash is untouched). Trivial in absolute dollars at this account size, but the percentage exposure is the number that should drive sizing discipline as the book scales. Unchanged from yesterday — a one-day easing in rates and geopolitical headlines does not move a structural, historically-grounded stress estimate.

## Liquidity risk by holding
- NVDA, VTI, VXUS, XLE: **Low** — mega-cap stock and among the largest ETFs on the market, effectively unlimited liquidity at this position size.
- OMCL: **Medium** — a mid/small-cap single name with a visibly wide bid/ask spread in recent sessions. At current fractional-share size not urgent, but the one position where exit costs are not negligible if it ever needs to be sold in size.

## Single-stock risk and position sizing
- NVDA (12.11% of equity) and OMCL (8.80% of equity) remain the book's only true single-name risk; combined 20.91% of equity sits under both the 18-20% single-name and 25% combined triggers, no forced review fires today.
- Standing recommendation unchanged: hold both single-name triggers as hard mandatory-review lines, not soft guidance.
- The rate-shock trigger (rule 6a) is genuinely further from firing today than yesterday (10yr eased to 4.70% from Tuesday's 4.75% intraday touch) — this is real information, not noise, and should be weighted as such rather than assumed to keep tightening by default.
- Unchanged flag: NVDA's 5-year CDS spread was independently reconfirmed by both MS and JPM this cycle at 80.77bps — still below the 82bps 7/27 record despite a Seeking Alpha headline framing it as a "surpass," which is arithmetically wrong. This desk treats the spread as elevated-but-not-record, consistent with MS/JPM's read, and flags that none of the three desks has yet pulled a genuinely clean, unambiguous CDS print — worth someone doing that directly rather than continuing to work from aggregator headlines that visibly conflict with their own numbers.
- New this run: OMCL's third-plus straight unexplained green session is starting to look less like routine mean-reversion and more like a pattern this desk cannot currently attribute to anything concrete. That is not itself a risk-sizing trigger (no position-sizing action is warranted on price action alone, and OMCL remains well under its own 15%-of-equity satellite cap), but it is worth the team's attention before, not after, whatever is actually driving it becomes clear.

## Tail risk scenarios
| Scenario | Rough probability (next 2-4 weeks) | Portfolio impact |
|---|---|---|
| Hormuz situation escalates further — a confirmed new kinetic exchange beyond the 8/18 UAE incident, direct US-Iran engagement | ~10-15% (lowered from yesterday's 15-20%; today brought a denial from Iran and no fresh incident, a genuine if fragile cooling) | Oil spikes further (XLE up sharply), but broad risk-off would likely still dominate and drag NVDA/VTI/VXUS down harder than XLE's gain offsets — net portfolio negative despite XLE's rally |
| 10yr closes >4.75% on two consecutive sessions, tripping rule 6a | ~25-35% (lowered from yesterday's 35-45%; today's easing to 4.70% moves the trigger further away, not closer) | Multiple compression concentrated in NVDA/OMCL/VTI's tech-heavy core; still the single most probable near-term negative catalyst on this list, just less imminent than yesterday |
| Hormuz situation de-escalates further (a real signed reopening, not disputed unilateral claims) | ~10-15% (unchanged; today's denial-of-launch news is a cooling in rhetoric, not evidence of an actual negotiated breakthrough) | Oil gives back gains, XLE underperforms, everything else likely relieved-rally; portfolio net positive but XLE position lags |
| Idiosyncratic OMCL negative catalyst (contract loss, guidance cut) before next print (11/4) | ~5-10% | Small dollar impact given position size, but would confirm a structural thesis break per the standing OMCL contingency plan and should trigger a trim, not a hold |
| Broad AI-capex/NVDA-specific de-rating independent of rates (bubble-unwind narrative, CDS-driven) | ~15-20% (unchanged — CDS remains elevated near its record regardless of today's rate relief) | Concentrated hit to NVDA and VTI's embedded tech weight simultaneously — the correlation risk flagged above realized |

## Hedging strategies for the top 3 risks (equities-only, no options)
1. **Correlation/no-ballast risk (top risk, unchanged in kind)**: cash is the only real lever at this account size. Treat the current 11.78%-of-pool deployable cash as a floor to defend. Today's genuine easing on both acute vectors is a reason to feel less urgency about deploying it defensively, not a reason to spend it on a fresh add — a good news day doesn't manufacture a new catalyst for NVDA or OMCL under rule 1, and BR's standing NVDA underweight is still better filled once the rate and Hormuz pictures are more durably resolved than one session's relief.
2. **Interest-rate/duration risk**: no bond or cash-equivalent ETF is currently held. Today's easing on both the 10yr and 30yr is real but one session — treat it as a data point, not a trend, until it repeats. If rule 6a ever does fire, the practical equities-only response remains: pause any NVDA/OMCL add, let XLE's naturally low duration continue doing the ballast work it's already doing.
3. **Geopolitical/Hormuz risk**: XLE remains a partial, narrow offset, and today's fresh session high — achieved without a fresh escalation headline to lean on — is a mild positive data point on the hedge's durability. Still not a durable hedge in a demand-shock regime; hold, don't add, don't trim, until MS's next oil-adjusted DCF or a material change in either direction.

## Rebalancing suggestions
- VTI is running ~2.4pp over a 30% pool target, VXUS ~1.5pp over a 25% pool target (per BR's own framework) — a modest trim toward target band would be defensible on valuation-discipline grounds, but this desk would not initiate it purely for rebalancing today: both drifts remain inside the 5pp band, and the marginal transaction cost at this position size isn't worth it against a non-urgent gap.
- Where this desk still differs from BR: BR's NVDA underweight (-4.24pp per pool basis as of yesterday) is real and persistent, but this desk would not treat today's rate/Hormuz relief as the all-clear to close it. One session of easing on two vectors that were both genuinely acute as recently as yesterday afternoon is encouraging, not confirming — waiting for either a second consecutive session of the same direction, or for NVDA/CRWD's Aug 26 print (7 days out) to pass, is still the more disciplined sequencing.
- If/when new capital is deployed, this desk's preference order for risk purposes is unchanged: (1) let deployable cash rise toward a higher floor than the current 11.78% of pool, given the toolbox has no other hedge; (2) any equity add should go toward the position with the lowest correlation to the rest of the book (OMCL) rather than the position with the highest (NVDA) — though OMCL's own unexplained momentum run this week argues for waiting on a cleaner entry read from GS/MS before sizing there either, rather than chasing today's green print.

---
*Prior report: consult `git log -p -- trading-experiment/analysts/bw-risk-assessment.md` for history.*
