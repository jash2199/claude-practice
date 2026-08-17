# BW Risk Assessment — 2026-08-17 (~14:41 ET, Monday)

**Overall portfolio risk grade: C** (unchanged from 8/17 10:4x ET and every prior read this week)

**Single biggest risk right now: the US-Iran ceasefire Memorandum of Understanding formally expired today (8/17) with no extension and no diplomatic breakthrough.** This is not the same "Hormuz still hasn't reopened" refrain this desk has repeated for weeks — it's a genuine status change: as of today there is no legal cessation-of-hostilities framework in place at all (Trump declared the prior arrangement terminated 7/7; the 6/17 Islamabad-brokered 60-day MoU was the last active de-escalation mechanism, and it lapsed today with both sides accusing each other of violations and Iran's FM saying as of 8/15 Tehran hasn't even decided whether to resume talks). Brent is back near $90, the Dow/S&P/Nasdaq are all red this afternoon on the news, and this lands on the same day the 30-year Treasury yield sits at a **19-year high (~5.26%, highest since June 2007)**. This book has not previously faced this specific combination — a live geopolitical framework lapse plus a genuine long-end rate event — on the same day. Nothing here has broken a portfolio trigger (see below), which is why the grade holds at C rather than dropping — but "no trigger fired" and "conditions improved" are not the same thing, and radical transparency means saying so plainly rather than letting an unchanged grade imply an unchanged risk picture.

---

## Heat map summary

| Risk factor | Level | Trend since 8/17 10:4x ET | Notes |
|---|:---:|:---:|---|
| Single-name concentration (NVDA) | 🟢 Low | Flat | 12.44% of equity, well under 18-20% trigger |
| Combined concentration (NVDA+OMCL) | 🟡 Moderate | Flat | 20.97% of equity, 4.03pp under 25% trigger — buffer has held all week but isn't widening |
| Look-through AI/tech concentration | 🟠 Elevated | Flat (structural) | ~30%+ of equity once VTI/VXUS tech weights are counted — see Sector section |
| Sector concentration (Energy/XLE) | 🟡 Moderate | ↑ (price, not risk) | 12.07% of equity, XLE is up on the day — see Hedging section, this is the hedge working |
| Sector concentration (Healthcare/OMCL) | 🟢 Low | Flat | 8.53% of equity, small dollar size |
| Geopolitical (Hormuz/Iran) | 🔴 High | **↑ Escalated today** | MoU expired 8/17, no extension, no talks resumption confirmed |
| Interest rate / duration | 🟠 Elevated | **↑ New signal** | 30yr at 19-yr high (5.26%); 10yr flat ~4.69%, rule 6a trigger not fired but curve is bear-steepening |
| Credit / NVDA financing overhang | 🟠 Elevated | Flat-to-improving | CDS ~79.8bps per JPM's 8/17 AM read, below the 82bps 7/27 record; OpenAI Ohio guarantee reportedly scaled back |
| Single-stock idiosyncratic (OMCL) | 🟡 Moderate | Flat | -3.24% vs Friday's close today, still no catalyst found, thin liquidity |
| Liquidity (portfolio-wide) | 🟢 Low | Flat | Only OMCL carries a real liquidity discount; everything else is mega-cap/ETF-liquid |
| Currency/FX (via VXUS) | 🟡 Moderate | ↑ (risk-off USD bid) | Geopolitical risk-off typically strengthens USD, a headwind to unhedged VXUS returns |
| Recession | 🟡 Moderate | Flat | No fresh recession signal this run; standing ~20-25% consensus odds by YE2026 (unchanged estimate) |
| Cash / dry powder | 🟢 Low | Flat | $6.00 deployable, 11.76% of pool, above BR's 10% floor |

---

## 1. Live portfolio (ground truth, Robinhood `get_portfolio` + `get_equity_positions` + `get_equity_quotes`, account 424593861, ~14:41 ET)

Total value **$101.0068** (cash $56.00 + equity $45.0068). Trading pool ≈ total − $50 reserve = **$51.0068**; deployable cash ≈ $6.00 (11.76% of pool).

| Holding | Qty | Live price | Position value | % of equity | % of pool | Day change (vs Fri 8/14 close) |
|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $225.60 | $5.6007 | 12.44% | 10.98% | +0.20% |
| VTI | 0.043290 | $382.505 | $16.5613 | 36.79% | 32.47% | -0.35% |
| VXUS | 0.154525 | $87.87 | $13.5789 | 30.17% | 26.62% | +0.19% |
| OMCL | 0.106405 | $36.09 | $3.8402 | 8.53% | 7.53% | -3.24% |
| XLE | 0.086775 | $62.585 | $5.4309 | 12.07% | 10.65% | +1.09% |
| Cash (deployable) | — | — | $6.00 | — | 11.76% | — |

Combined NVDA+OMCL: **20.97% of equity** — 25% trigger not fired, 4.03pp buffer, essentially unchanged from the 09:39 ET open read (21.12%) all day.

---

## 2. Correlation analysis between holdings

- **NVDA ↔ VTI: high (~0.6-0.8 realized, structurally rising)** — NVDA is itself a top-3 constituent of VTI's underlying index, so a meaningful share of "diversification" between these two positions is double-counted, not independent.
- **NVDA ↔ VXUS: moderate** — lower direct overlap than VTI (VXUS is ex-US), but global tech/AI sentiment still transmits through non-US mega-cap tech and Asian semiconductor supply-chain names.
- **VTI ↔ VXUS: high on risk-off days (~0.7-0.85), lower on idiosyncratic-US days** — global equity beta dominates in a genuine selloff; today's session (both down on the same Hormuz/rate headline) is a clean example of that correlation compressing toward 1.
- **XLE ↔ everything else: the one genuine diversifier, but conditionally** — on **geopolitical/supply-shock days** (like today), XLE has moved opposite the rest of the book in essentially every instance logged in this book's trade history (see Balance history entries throughout 8/10-8/17: XLE the day's leader on every Hormuz headline while NVDA/VTI/VXUS sit flat-to-down). On **demand-driven recession days**, this correlation flips — energy typically falls with everything else, sometimes harder, as demand destruction dominates over supply-side risk premium. XLE is a hedge against one specific tail risk (supply-side Hormuz shock), not a general-purpose one.
- **OMCL ↔ everything else: lowest correlation, but not zero** — its day-to-day moves (largely unexplained drift per this desk's own and JPM's repeated WebSearch checks) track its own idiosyncratic flow more than the broad tape, making it the closest thing to a true diversifier in normal conditions. In a genuine market-wide crash, small-cap beta compresses toward 1 like everything else — OMCL's diversification benefit is a calm-market property, not a crash-market one.
- **Net read**: this is a five-position book that behaves like **three correlated blocks** (NVDA+VTI+VXUS as one levered-to-broad-market-and-tech block; XLE as a conditional geopolitical hedge; OMCL as a low-but-not-negative-correlation idiosyncratic satellite) rather than five genuinely independent bets. True diversification is thinner than the position count suggests.

---

## 3. Sector concentration risk

**Direct sector exposure (by position):**
- Technology/Semiconductors (NVDA): 12.44% of equity
- Energy (XLE): 12.07% of equity
- Healthcare technology (OMCL): 8.53% of equity
- Diversified/broad market (VTI + VXUS): 66.96% of equity — not sector-pure, but not sector-neutral either

**Look-through concentration (the number that matters more):** VTI's underlying index is roughly one-third weighted to information technology/communication-services mega-caps, most of them AI-linked; VXUS carries a smaller but real tech weight (~15-18%) plus tech-adjacent Asian semiconductor-supply-chain names. Applying rough sector weights: VTI contributes an estimated ~12-13pp of additional tech-sector exposure, VXUS an estimated ~5pp — on top of NVDA's direct 12.44%. **Total AI/tech look-through exposure is plausibly ~29-31% of equity**, not the ~12% a naive "NVDA is only one position" read suggests. BR's own 8/13 report flagged the external validation for this: the 10 largest US index constituents (nearly all AI-linked) are now ~36% of the Morningstar US Market Index, the most concentrated the US market has been since 1932. This book's "core+satellite" structure does not escape that concentration — it inherits it through the core sleeve.

**Sector heat map:**

| Sector (look-through) | Est. % of equity | Risk level |
|---|---:|:---:|
| Technology/AI (NVDA direct + VTI/VXUS tech weight) | ~29-31% | 🟠 Elevated |
| Energy (XLE) | 12.07% | 🟡 Moderate |
| Healthcare tech (OMCL) | 8.53% | 🟢 Low (small size) |
| Broad diversified ex-tech (remainder of VTI/VXUS) | ~48-50% | 🟢 Low |

---

## 4. Geographic exposure and currency risk factors

- **NVDA, OMCL, XLE**: US-domiciled, USD-denominated, but each has real *revenue* geographic exposure — NVDA to China/Asia via export-control-sensitive data-center sales, XLE indirectly via globally-priced (USD) oil benchmarks, OMCL more domestically concentrated (US hospital systems).
- **VTI**: ~100% US equities, no direct currency risk, but embeds the AI/mega-cap names most exposed to global (and specifically China/Taiwan supply-chain) geopolitical risk.
- **VXUS**: the book's only position with **direct, unhedged currency risk** — EUR, JPY, GBP, and EM-currency exposure via its non-US developed and emerging-market holdings. In a risk-off regime driven by a Middle East conflict (today's exact setup), the USD typically strengthens as a safe-haven flow, which is a **headwind to VXUS returns independent of the underlying foreign equities' local-currency performance**. This is a real, currently-live risk factor, not a hypothetical one, given today's session.
- **Net geographic read**: ~70% of equity value (NVDA+VTI+OMCL+XLE) carries no direct currency risk but real indirect geopolitical/supply-chain exposure; ~30% (VXUS) carries direct FX risk on top of its own equity risk, working against the position on exactly the kind of day the book is having today.

---

## 5. Interest rate sensitivity per position

| Position | Rate sensitivity | Why |
|---|:---:|---|
| NVDA | 🔴 High | Long-duration growth stock (high forward multiple), plus a distinct credit-spread channel — NVDA's own financing-heavy deal structure (circular vendor financing, Ohio/OpenAI guarantees) makes it sensitive to both the risk-free rate *and* credit spreads, a double exposure most single stocks don't carry |
| OMCL | 🟠 Elevated | Small-cap growth profile, though net-cash balance sheet ($290.97M cash vs $202.18M debt per GS) partially insulates it from refinancing risk that would hit a levered small-cap harder |
| VTI | 🟡 Moderate-High | Total-market average, but skewed toward the same long-duration mega-cap growth names driving NVDA's sensitivity |
| VXUS | 🟡 Moderate | Typically more value/financials-weighted than the US market, so somewhat lower average equity duration, but not immune |
| XLE | 🟢 Low-Moderate | Value/cash-flow sector, lowest equity-duration in the book; more exposed to *real* rates via commodity-financing costs than to nominal-rate moves directly |

**Today's specific signal**: the 30-year yield's push to a 19-year high (~5.26%, highest since June 2007) is a **long-end, not short-end, move** — a bear-steepening dynamic (inflation/fiscal-supply concerns, not near-term Fed-hike fears) that disproportionately punishes exactly the long-duration growth names this book is most concentrated in (NVDA, and the growth-tilted portion of VTI). The 10-year sits at ~4.69% (flat on the day), so rule 6a's trigger (two consecutive closes above 4.75% on the 10yr) is **not fired** — but that trigger was designed around the belly of the curve, and it is not currently built to catch a long-end-specific move like today's. Flagging this gap explicitly rather than letting "trigger not fired" imply "rate risk is contained."

---

## 6. Recession stress test (estimated drawdown by position)

Standard-recession-scenario estimates (not a specific catalyst call, a stress-test exercise per mandate):

| Position | Est. peak-to-trough drawdown in a garden-variety recession | Rationale |
|---|---:|---|
| NVDA | -40% to -55% | High-beta AI capex-cycle name; 2022 semis fell 50%+ on a demand-normalization scare with far less credit/financing overhang than exists today |
| OMCL | -35% to -45% | Small-cap growth, already down significantly from 2021 highs; healthcare's defensive reputation applies more to services/pharma than hospital-capex-cycle medtech |
| VTI | -30% to -37% | In line with historical US recession drawdowns (2008 -37%, 2020 -34%, 2022 -25%), skewed toward the upper end given today's elevated tech concentration |
| VXUS | -30% to -38% | Similar equity beta to VTI plus a currency headwind if the recession is US-specific and drives further USD strength; less if the recession is global and USD strength doesn't discriminate |
| XLE | -35% to -50% | Counterintuitively one of the largest potential drawdowns *despite* today's geopolitical strength — a demand-driven recession would crush oil demand and could unwind the current Hormuz risk premium simultaneously (a double hit: falling demand AND a falling geopolitical premium if the war also winds down) |

**Blended portfolio estimate**: roughly **-33% to -42%** peak-to-trough on the equity sleeve in a standard recession scenario, before accounting for the ~56% cash buffer that limits the *account-level* (not equity-sleeve-level) drawdown materially — a genuine structural strength of this book's cash-heavy design that this desk has flagged positively before and reiterates here.

---

## 7. Liquidity risk rating per holding

| Holding | Liquidity rating | Notes |
|---|:---:|---|
| NVDA | A | Mega-cap, among the most liquid single names on the US market |
| VTI | A | Massive AUM ETF, tight spreads, deep authorized-participant creation/redemption |
| VXUS | A | Same structural liquidity profile as VTI |
| XLE | A- | Large sector ETF, very liquid, marginally wider spreads than VTI/VXUS in stress but not a real constraint at this position size |
| OMCL | C+ | Mid/small-cap name with a documented history of unusually wide bid/ask spreads on this book's own live checks (e.g., $36.45/$37.00 on 8/7) — the only holding where a fractional-share market order could see meaningful slippage relative to the quoted mid |

At this book's position sizes (all under $17), liquidity is a real but not urgent risk — flagging OMCL as the one position where execution quality genuinely matters if a trim/exit is ever needed on short notice.

---

## 8. Single stock risk and position sizing recommendations

- **NVDA (12.44% of equity, 10.98% of pool)**: comfortably under the 18-20% solo trigger, and per this desk's now-adopted 8/26 earnings contingency plan (declined pre-earnings trim, written post-print reaction rule in place), sizing is intentionally frozen into the print. This desk continues to view the position as correctly sized for now — not because concentration is low, but because the earnings-contingency framework already governs the one lever (trim) that would otherwise be live.
- **OMCL (8.53% of equity, 7.53% of pool)**: smallest dollar position, thinnest liquidity, no fresh catalyst behind today's -3.24% move — continues to look like unexplained drift rather than a developing thesis break. Sizing gate (BW/MS post-transcript sign-off) remains this desk's own standing call to make eventually, not made today absent a fresh post-transcript trigger.
- **XLE (12.07% of equity, 10.65% of pool)**: below the 15%-of-equity individual satellite trigger. Given today's news, this desk explicitly does **not** recommend trimming XLE on valuation grounds (MS's DCF still reads it overvalued) — see Hedging section below for why.
- **VTI/VXUS**: both within BR's 5pp drift band on a pool basis; no single-stock risk framework applies to diversified index funds, but the look-through tech concentration flagged in Section 3 is the more relevant lens for these two.

**Sizing recommendation, unchanged from prior reads**: no position in this book currently requires a risk-driven trim. The one genuine sizing tension — NVDA's policy underweight vs. its valuation/event-risk case for staying put — remains correctly unresolved by design per BR's own investment policy statement, and this desk continues to defer to that framework rather than push a unilateral call.

---

## 9. Tail risk scenarios with probability estimates

(Desk estimates, not market-implied probabilities — presented as directional judgment calls per mandate, not as precise statistics.)

1. **NVDA AI-financing/credit event** — CDS spreads re-widen past the 82bps 7/27 record on a fresh circular-financing scare (an OpenAI deal restructuring, a counterparty credit downgrade) before the 8/26 print. Est. **~10-15%** probability of a >20% single-session-adjacent NVDA drawdown in the next 30 days tied to this specific channel.
2. **Hormuz supply-disruption event** — a materially worse escalation than today's legal-framework lapse: an actual attack that meaningfully cuts transit volumes further (already down to 8-15 vessels/day from ~130 pre-conflict per this run's WebSearch) or a strike on a major energy facility. Est. **~15-20%** probability of a >10% oil-price shock (either direction — a surprise resolution is also plausible and would move XLE hard the other way) in the next 30 days, materially elevated from a normal-week baseline given today's MoU expiration.
3. **Disorderly long-end rate move** — a weak 30-year auction or a foreign-buyer-strike headline pushes the 30yr meaningfully past today's 19-year high, dragging growth-stock multiples down broadly. Est. **~10%** probability of a NVDA/OMCL-specific >10% derating tied to this channel in the next quarter.
4. **OMCL idiosyncratic negative surprise** — a contract loss, guidance cut, or negative report surfaces with no advance warning (consistent with its pattern of unexplained single-name drift). Est. **~10-15%** probability of a >15% single-day OMCL move (either direction) before its next print.
5. **Broad US recession** — standing consensus-market-implied estimate (Polymarket and similar, cited in this desk's prior reports) of roughly **~20-25%** odds of a recession being declared by end of 2026 — unchanged this run, no fresh data point found.

---

## 10. Hedging strategies to reduce the top 3 risks (equities-only toolbox — no options)

**Risk #1 — AI/tech look-through concentration (~29-31% of equity):** With no options available, the only real lever is relative allocation. This desk does **not** recommend an active NVDA trim (see Section 8, frozen into the 8/26 print by design) — instead, any *future* deployment of the $6 cash buffer or new profits should be weighted toward VXUS or a non-tech satellite over adding to NVDA or a tech-heavy core-sleeve trim, consistent with BR's DCA framing but explicitly reasoned here as a concentration hedge, not just a rebalancing preference.

**Risk #2 — Hormuz/Iran escalation (today's biggest risk):** XLE **is** this book's equities-only hedge against this exact scenario, and it has behaved exactly as designed all week — up on every Hormuz headline while the rest of the book sits flat-to-down. **This desk explicitly recommends against trimming XLE on MS's standing "overvalued" DCF call while this geopolitical risk is live and escalating** — doing so would remove the one holding with a demonstrated negative-to-uncorrelated relationship with the book's single largest identified tail risk, in exchange for a valuation argument that assumes oil mean-reverts on a timeline this desk cannot forecast. Hold XLE through this risk window regardless of its DCF status.

**Risk #3 — Rate/duration exposure (NVDA, growth-tilted OMCL, and VTI's growth skew):** No bond or options sleeve is available to hedge duration directly. The practical equities-only response is discipline on **new** capital: avoid adding to long-duration growth names while the long end is actively selling off, and if a new satellite slot opens (per BR's dry-powder discussion), prefer lower-duration sectors (energy, financials, value) over additional growth exposure. This is a "don't make it worse" hedge, not a "reduce it" hedge — this book's mandate and existing triggers don't support an active NVDA/OMCL trim on rate grounds alone absent a structural break.

---

## 11. Rebalancing suggestions with allocation percentages

Current pool-basis allocation vs. BR's target model (VTI 30% / VXUS 25% / NVDA 15% / OMCL 10% / XLE 10% / cash 10%):

| Sleeve | Target | Current | Drift | Within 5pp band? |
|---|---:|---:|---:|:---:|
| VTI | 30% | 32.47% | +2.47pp | ✅ |
| VXUS | 25% | 26.62% | +1.62pp | ✅ |
| NVDA | 15% | 10.98% | -4.02pp | ✅ (near the edge) |
| OMCL | 10% | 7.53% | -2.47pp | ✅ |
| XLE | 10% | 10.65% | +0.65pp | ✅ |
| Cash | 10% | 11.76% | +1.76pp | ✅ |

No drift trigger is close to firing anywhere. This desk's own rebalancing view, layered on top of the mechanical drift bands: **do not use today's session to justify closing NVDA's underweight** (rate/credit/event risk all argue for patience into 8/26, not urgency) and **do not use MS's valuation call to justify trimming XLE's modest overweight** (see Hedging section — it's doing its job today). If anything is due for attention once the standing OMCL sizing gate clears, it should be OMCL, not a reshuffle of the two positions currently carrying the book's live risk signals.

---

Sources checked this run: [Nvidia's rising CDS the talk of Wall Street amid circular financing fears (Yahoo Finance/Investing.com)](https://finance.yahoo.com/markets/stocks/articles/nvidia-rising-cds-talk-wall-123955612.html), [Nvidia's Credit Risk Surpasses Google's as CDS Spreads Hit 69 Basis Points (KuCoin)](https://www.kucoin.com/news/flash/nvidia-s-credit-risk-surpasses-google-s-as-cds-spreads-hit-69-basis-points), [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield), [30-Year Treasury Yield Hits 19-Year High (Benzinga)](https://www.benzinga.com/Opinion/26/08/60965456/30-year-treasury-yield-hits-19-year-high-here-are-investors-who-gain-and-who-get-crushed), [What rising Treasury yields are telling us (Axios)](https://www.axios.com/2026/08/17/treasury-yields-warsh-bonds), [U.S. set to pay most for 30-year debt in quarter of a century (Fortune)](https://fortune.com/2026/08/13/us-debt-treasury-30-year-highest-25-years/), [US-Iran MoU ends: What happens next? (Al Jazeera)](https://www.aljazeera.com/news/2026/8/16/us-iran-mou-is-set-to-expire-what-to-know), [US-Iran Memorandum of Understanding expires: How and why it fell apart (Al Jazeera)](https://www.aljazeera.com/news/2026/8/17/us-iran-memorandum-of-understanding-expires-how-and-why-it-fell-apart), [Stalemate on the strait as deadline for US-Iran agreement expires (The National)](https://www.thenationalnews.com/news/us/2026/08/16/deadline-for-us-iran-agreement-expires-with-stalemate-set-to-continue/), [Stock market today: Dow, S&P 500, Nasdaq fall as oil rises amid US-Iran tensions, 30-year yield hits highest level in decades (Yahoo Finance)](https://finance.yahoo.com/markets/live/stock-market-today-monday-august-17-dow-sp-500-nasdaq-094421171.html), [Stock Market Today (Aug. 17, 2026): Dow slips ahead of retail earnings reports (TheStreet)](https://www.thestreet.com/stock-market-today/stock-market-today-dow-jones-sp-500-nasdaq-updates-aug-17-2026). Internal: trading-experiment/state.md (8/17 Balance history 09:39-14:36 ET and Run notes, NVDA earnings contingency plan, Strategy & theories), analysts/ms-dcf-valuation.md (8/17 late-morning), analysts/gs-stock-screener.md (8/17 late-morning), analysts/jpm-earnings-analyzer.md (8/17 morning, CDS ~79.8bps read), analysts/br-portfolio-builder.md (8/13, target model and AI-concentration data point). Live position/price data: Robinhood `get_portfolio` + `get_equity_positions` + `get_equity_quotes`, account 424593861, this run (~14:41 ET).
